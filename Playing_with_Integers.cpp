#include <bits/stdc++.h>
using namespace std;

string a[] = {
    "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void IntegerToString(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive case

    int digit = n % 10;
    IntegerToString(n / 10);
    cout << a[digit] << " ";
}

int main()
{
    int n = 2048159821;
    IntegerToString(n);
    cout << endl;
}