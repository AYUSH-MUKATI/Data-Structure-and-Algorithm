// Merge sort
//  step 1. Divide
//  step 2. sort
//  step 3. Merge

#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int *b, int *c, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s, j = mid + 1, k = s;

    while (i <= mid and j <= e)
    {
        if (b[i] <= c[j])
        {
            a[k++] = b[i++];
        }
        else
        {
            a[k++] = c[j++];
        }
    }
    while (i <= mid)
    {
        a[k++] = b[i++];
    }

    while (j <= e)
    {
        a[k++] = c[j++];
    }
}

void mergeSort(int *a, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return;
    }

    // Recursive Case
    // Divide
    int b[100], c[100];
    int mid = (s + e) / 2;
    for (int i = s; i <= mid; i++)
    {
        b[i] = a[i];
    }
    for (int i = mid + 1; i <= e; i++)
    {
        c[i] = a[i];
    }

    // sort -->  Pure Assumption (Recursion)
    mergeSort(b, s, mid);
    mergeSort(c, mid + 1, e);

    // Merge
    merge(a, b, c, s, e);
}

int main()
{
    int a[] = {4, 1, 6, 2, 0, 5};
    int n = sizeof(a) / sizeof(int);
    cout << "Before Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    mergeSort(a, 0, n - 1);

    cout << "After Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}