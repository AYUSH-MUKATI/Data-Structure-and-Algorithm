#include <bits/stdc++.h>
using namespace std;

int stringToInt(char *a, int n)
{
    // base case
    if(n == 0){
        return 0;
    }
    // Recursive  case
    int digit = a[n - 1] - '0';
    int smallerAns = stringToInt(a, n - 1);
    int biggerAns = smallerAns * 10 + digit;

    return biggerAns;
}

int main()
{
    char a[] = "4329";
    int n = strlen(a);

    int ans = stringToInt(a, n);
    cout << ans << endl;
    cout << ans + 1 << endl;
}