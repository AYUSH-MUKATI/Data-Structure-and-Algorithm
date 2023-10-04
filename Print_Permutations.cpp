#include <bits/stdc++.h>
using namespace std;

void Permutations(char *in, int i)
{
    // base case
    if (in[i] == '\0')
    {
        cout << in << endl;
        return;
    }
    // recursive case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[j], in[i]);
        Permutations(in, i + 1);
        swap(in[j], in[i]);
    }
}

int main()
{
    char in[] = "abc";
    Permutations(in, 0);
}