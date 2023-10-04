// Function calling itself is called recursion.
// Follows Principle of   Mathematical Induction.
// 1. For N = 1, answer is known
// 2. Assume for N = K, answer is true
// 3. For N = K + 1, prove answer is true

//     a. Base Case : smallest or simplest problem of the bigger problem
//     b. Reccurence Relation / Recursive case :
// Assumption->To Solve the smaller problem via recursion
//     c.Find the Solution

//         b(i)
//             .Break the bigger Problem into Smaller Problem of the same Type.

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    // 1. Base case
    if (n == 0)
    {
        return 1;
    }

    // 2. Reccurence Relation / Recursive case
    // n! = n * (n-1)!, n = 5
    // fact(n) = n * fact(n-1)
    // fact(5) = 5 * fact(4)

    // int smallerAns = fact(n - 1); // 24, n-1 = 4

    // // 3. Find The Solution
    // int biggerAns = n * smallerAns;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << "Factorial of " << n << " : " << fact(n) << endl;
}
