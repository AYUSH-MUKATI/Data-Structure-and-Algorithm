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
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;

    PrintAllOccurences(a, n, 0, m);
}