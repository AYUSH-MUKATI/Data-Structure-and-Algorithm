#include <bits/stdc++.h>
using namespace std;

void Subsequence(char *in, char *out, int i, int j)
{
    // base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    // recursive case
    // 1. ignore the ith character
    Subsequence(in, out, i + 1, j);
        // 2. Take the ith character
        out[j] = in[i];
    Subsequence(in, out, i + 1, j + 1);
}

int main()
{
    char in[] = "abc";
    char out[100];

    Subsequence(in, out, 0, 0);
}