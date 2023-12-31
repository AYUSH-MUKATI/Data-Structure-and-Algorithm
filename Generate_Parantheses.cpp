#include <bits/stdc++.h>
using namespace std;

void generate(char *a, int i, int open, int close, int n)
{
    // base case
    if (i == 2 * n)
    {
        a[i] = '\0';
        cout << a << endl;
        return;
    }

    // recursive case
    if (open < n)
    {
        // Add '('
        a[i] = '(';
        generate(a, i + 1, open + 1, close, n);
    }
    if (open > close)
    {
        // Add ')'
        a[i] = ')';
        generate(a, i + 1, open, close + 1, n);
    }
}

int main()
{
    int n;
    cin >> n;
    char a[n];
    generate(a, 0, 0, 0, n);
}