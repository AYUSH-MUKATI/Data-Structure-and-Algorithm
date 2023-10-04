#include <bits/stdc++.h>
using namespace std;

int knapsack(int *wt, int *price, int capacity, int n)
{
    // base case
    if (n == 0 || capacity == 0)
    {
        return 0;
    }

    // Recursive case
    int inc = INT_MIN, exc = INT_MIN;

    // we can pick the n-1th product
    if (capacity >= wt[n - 1])
    {
        inc = price[n - 1] + knapsack(wt, price, capacity - wt[n - 1], n - 1);
    }

    // we can ignore the n-1th product
    exc = 0 + knapsack(wt, price, capacity, n - 1);

    return max(inc, exc);
}

int main()
{
    int wt[] = {1, 2, 3, 5};
    int price[] = {20, 50, 60, 100};
    cout<<knapsack(wt, price, 6, 4);

}