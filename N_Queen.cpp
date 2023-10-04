#include <bits/stdc++.h>
using namespace std;

bool isSafeToPut(int board[100][100], int i, int j, int n)
{
    // check rows and columns
    for (int k = 0; k < n; k++)
    {
        if (board[k][j] == 1 || board[i][k] == 1)
        {
            return false;
        }
    }
    // Lets check for the diagonal
    // check for the upper right
    int k = i, l = j;
    while (k >= 0 and l < n)
    {
        if (board[k][l] == 1)
        {
            return false;
        }
        k--;
        l++;
    }
    // check for the upper left
    k = i, l = j;
    while (k >= 0 and l >= 0)
    {
        if (board[k][l] == 1)
        {
            return false;
        }
        k--;
        l--;
    }
    return true;
}

bool NQueen(int board[100][100], int i, int n)
{
    // base case
    if (i == n)
    {
        // Print the board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << board[i][j] << " ";
                (board[i][j] == 1) ? cout<<"Q " : cout<<"_ ";
            }
            cout << endl;
        }
        cout<<endl;
        return false;// true to print one solution and false to print all possible solution
    }

    // recursive case

    for (int j = 0; j < n; j++)
    {
        if (isSafeToPut(board, i, j, n))
        {
            board[i][j] = 1; // place the queen on i, j if its safe to put
            bool isRemainingSolved = NQueen(board, i + 1, n);
            if (isRemainingSolved == true)
            {
                return true;
            }
            board[i][j] = 0; // Backtracking
        }
    }
    return false;
}

int main()
{
    int board[100][100] = {0};

    int n;
    cin >> n;

    NQueen(board, 0, n);
}