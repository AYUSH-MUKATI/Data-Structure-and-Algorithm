#include <bits/stdc++.h>
using namespace std;

int sol[100][100] = {0};

bool RateInMaze(char maze[100][100], int i, int j, int n, int m)
{
    // base case
     
    
    if (i == n - 1 and j == m - 1)
    {
        sol[i][j] = 1;
        
        // print the solution
        int k = 0;
        for (k = 0; k < n; k++)
        {
            for (int l = 0; l < m; l++)
            {
                // cout << sol[k][l] << " ";
            }
            // cout << endl;
            
        }
        
        return false; // true to print one solution and false to print all possible solution
        
    }

    // recursive case
    // Assume that i, j cell is part of the solution
    sol[i][j] = 1;
    // Lets check whether we can solve the maze from the right side
    if (j + 1 < m and maze[i][j + 1] != 'X')
    {
        bool isMazeSolvedFromRight = RateInMaze(maze, i, j + 1, n, m);
        if (isMazeSolvedFromRight == true)
        {
            return true;
        }
    }
    // Lets check whether we can solve the maze from the down side
    if (i + 1 < n and maze[i + 1][j] != 'X')
    {
        bool isMazeSolvedFromDown = RateInMaze(maze, i + 1, j, n, m);
        if (isMazeSolvedFromDown == true)
        {
            return true;
        }
    }

    sol[i][j] = 0; // Backtracking
    return false;
}


int main()
{
    int n,  m;
    cin>>n>>m;

    char maze[100][100];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<m; j++){
            cin>>maze[i][j];
        }
    }
    

    // char maze[][100] = {
    //     "0000",
    //     "00XX",
    //     "0000",
    //     "XX00"};

    RateInMaze(maze, 0, 0, n, m);
}