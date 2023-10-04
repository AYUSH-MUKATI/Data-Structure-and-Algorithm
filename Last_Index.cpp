#include <bits/stdc++.h>
using namespace std;

int LastOccurence(int *a, int n, int i, int key)
{
    // base case
    if (i == n)
    {
        return -1;
    }
    // recursive case
    if (a[i] == key)
    {
        // i could be an answer
        int bi = LastOccurence(a, n, i + 1, key);
        if (bi != -1)
        {
            return bi;
        }
        else
        {
            return i;
        }
    }
    int j = LastOccurence(a, n, i + 1, key);
    return j;
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

    cout << LastOccurence(a, n, 0, m) << endl;
}