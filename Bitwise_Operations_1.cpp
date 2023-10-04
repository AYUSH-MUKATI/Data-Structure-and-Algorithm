#include <bits/stdc++.h>
using namespace std;

void clearBit(int &n, int i)
{
    int mask = (1 << i);
    mask = (~mask);
    n = (n & mask);
    cout << n << endl;
}

void updateBit(int &n, int i, int v)
{
    int mask = (1 << i);
    mask = (~mask);
    n = (n & mask);

    n = (n | (v << i));
}

int main()
{
    int n = 16;
    // clearBit(n, 3);
    updateBit(n, 3, 1);
    cout << n;
}