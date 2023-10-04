#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    int lsb = (n & 1) == 0 ? 0 : 1;
    return lsb;
}

bool checkith(int n, int i)
{
    int mask = (i << i);

    if ((n & mask) > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void setithBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;

    if (isOdd(n))
    {
        cout << n << " is odd" << endl;
    }
    else
    {
        cout << n << " is even" << endl;
    }

    if (checkith(n, i))
    {
        cout << i << " bit is : " << 1 << endl;
    }
    else
    {
        cout << i << " bit is : " << 0 << endl;
    }

    setithBit(n, i);
    cout << n << endl;
}