#include <bits/stdc++.h>
using namespace std;

void Subsequence(char *in, char *out, int i, int j, string *subsequence, int &count)
{
    // base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        // cout << out << endl;
        subsequence[count++] = out;
        return;
    }
    // recursive case
    // 1. ignore the ith character
    Subsequence(in, out, i + 1, j, subsequence, count);
    // 2. Take the ith character
    out[j] = in[i];
    Subsequence(in, out, i + 1, j + 1, subsequence, count);
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        char in[100];
        cin >> in;
        char out[100];
        string subsequence[100];
        int count = 0;

        Subsequence(in, out, 0, 0, subsequence, count);

        sort(subsequence, subsequence + count);

        for (int j = 0; j < count; j++)
        {
            cout << subsequence[j] << endl;
        }
    }
}