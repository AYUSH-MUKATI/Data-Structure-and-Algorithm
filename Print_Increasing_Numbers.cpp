#include <bits/stdc++.h>
using namespace std;

void printInc(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }

    cout << i << " ";
    printInc(i + 1, n);
}

int main()
{
    int n;
    cin >> n;

    printInc(1, n);
    cout << endl;
}