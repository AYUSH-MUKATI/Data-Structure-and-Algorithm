#include <bits/stdc++.h>
using namespace std;

int out[100];
int j = 0;

void PrintAllOccurences(int *a, int n, int i, int key)
{
    // base case
    if (i == n)
    {
        return;
    }
    // recursive case
    if (a[i] == key)
    {
        cout << i << " ";
        out[j] = i;
        j++;
    }
    PrintAllOccurences(a, n, i + 1, key);
}

int main()
{
    int a[] = {1, 2, 3, 2, 4, 2};
    int n = sizeof(a) / sizeof(int);

    PrintAllOccurences(a, n, 0, 2);
    cout << endl;
    cout << "Indices are: ";
    for (int i = 0; i < j; i++)
    {
        cout << out[i] << " ";
    }
}