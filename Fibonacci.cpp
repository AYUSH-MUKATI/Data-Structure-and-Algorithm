#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{

    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Reccurence Relation / Recursive case
    //  fibo(n) = fibo(n-1) + fibo(n-2);
    //  int smallerAns1 = fibo(n-1);
    //  int smallerAns2 = fibo(n-2);
    //  int ans = fibo(n-1) + fibo(n-2);

    // find the solution
    //  int biggerAns = smallerAns1 + smallerAns2;

    // return biggerAns;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << "Fibonacci number of " << n << " is : " << fibo(n) << endl;
}