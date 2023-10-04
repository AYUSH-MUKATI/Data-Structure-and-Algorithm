#include <bits/stdc++.h>
using namespace std;

void cleariBits(int &n, int i)
{
    int mask = (~0);
    mask = (mask << i);

    n = (n & mask);
}

void clearRange(int &n, int j, int i)
{
    int ma = (~0);
    ma = ma << j;
    // int mb = 2^i-1
    int mb = (1 << i) - 1;
    int mask = ma | mb;
    n = n & mask;
}

int main()
{
    int n, i, j;
    cin >> n >> j >> i;
    // cleariBits(n,i);
    clearRange(n, j, i);
    cout << "N: " << n << endl;
}