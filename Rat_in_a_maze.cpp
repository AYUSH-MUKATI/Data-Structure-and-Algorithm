#include <bits/stdc++.h>
using namespace std;


int sol[1000][1000] = {0};
bool RateInMaze(char maze[1000][1000], int i, int j, int n, int m)
{
    // base case

    if (i == n - 1 and j == m - 1)
    {
        sol[i][j] = 1;
        // print the solution
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < m; l++)
            {
                cout << sol[k][l] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true; // true to print one solution and false to print all possible solution
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
    // int n,  m;
    // cin>>n>>m;
    int N,M;
    cin>>N>>M;

    

    char maze[1000][1000];

    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j<M; j++){
            cin>>maze[i][j];
        }
    }
    

    // char maze[][100] = {
    //     "0000",
    //     "00XX",
    //     "0000",
    //     "XX00"};

    bool ans = RateInMaze(maze, 0, 0, N, M);
    if(ans == false){
        cout<<"-1";
    }
}