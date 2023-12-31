#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    // base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    // first step Move N-1 disk from src to helper
    towerOfHanoi(n - 1, src, helper, dest);

    cout << "Move " << n << " disk from " << src << " to " << dest << endl;

    towerOfHanoi(n - 1, helper, dest, src);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'C', 'B');
}