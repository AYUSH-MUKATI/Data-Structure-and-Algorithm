#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n, int i)
{
    // Base Case
    if (i == n - 1)
    {
        return true;
    }

    bool isSmallerSorted = isSorted(a, n, i + 1);
    if (isSmallerSorted and a[i] < a[i + 1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a[] = {1, 4, 6, 8, 9, 10};
    int n = sizeof(a) / sizeof(int);
    bool ans = isSorted(a, n, 0);

    if (ans == true)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
}