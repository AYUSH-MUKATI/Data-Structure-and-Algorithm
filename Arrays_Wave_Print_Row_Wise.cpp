#include<bits/stdc++.h>
using namespace std;

void ArrayInput(int a[][100], int n, int m){
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin>>a[row][col];
            
        }
    }
}


void WavePrint(int a[][100], int r, int c){
    for (int row = 0; row < r; row++)
    {
        if(row % 2 == 0){
            for (int col = 0; col < c; col++)
            {
                cout<<a[row][col]<<", ";
            }
            
        }
        else{
            for (int col = c-1; col >= 0; col--)
            {
                cout<<a[row][col]<<", ";
            }
            
        }

    }
    cout<<"END";
}


int main(){
    int a[100][100];
    int r, c;
    cin>>r>>c;
    ArrayInput(a,r,c);
    WavePrint(a,r,c);
}