#include <bits/stdc++.h>
using namespace std;

int sol[100][100] = {0};

int RateInMaze(char maze[100][100], int i, int j, int n, int m)
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
        
        return 0; // 1 to print one solution and 0 to print all possible solution
        
    }

    // recursive case
    // Assume that i, j cell is part of the solution
    sol[i][j] = 1;
    // Lets check whether we can solve the maze from the right side
    if (j + 1 < m and maze[i][j + 1] != 'X')
    {
        int isMazeSolvedFromRight = RateInMaze(maze, i, j + 1, n, m);
        if (isMazeSolvedFromRight == 1)
        {
            return 1;
        }
    }
    // Lets check whether we can solve the maze from the down side
    if (i + 1 < n and maze[i + 1][j] != 'X')
    {
        int isMazeSolvedFromDown = RateInMaze(maze, i + 1, j, n, m);
        if (isMazeSolvedFromDown == 1)
        {
            return 1;
        }
    }

    sol[i][j] = 0; // Backtracking
    return 0;
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
    

   

    int ans = RateInMaze(maze, 0, 0, n, m);
    cout<<ans;
}