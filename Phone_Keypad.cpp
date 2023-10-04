#include <bits/stdc++.h>
using namespace std;

string keys[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV",
    "WXYZ"};

void phoneKeypad(char *in, char *out, int i, int j)
{
    // base case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    // recursive case

    int digit = in[i] - '0';
    for (int k = 0; keys[digit][k] != '\0'; k++)
    {
        out[j] = keys[digit][k];

        phoneKeypad(in, out, i + 1, j + 1);
    }
}

int main()
{
    char in[100];
    char out[100];

    cin >> in;

    phoneKeypad(in, out, 0, 0);
}