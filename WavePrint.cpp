#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a[100][100];
    int r, c;
    cout<<"Enter no. of rows and cols: ";
    cin>>r>>c;
    // int val = 1;
    // cout<<"Enter the values : "<<endl;
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            cin>>a[row][col];
            // a[row][col] = val;
            // val++;
        }
    }
    
    for (int col = 0; col < c; col++)
    {
        if(col % 2 == 0){
            for (int row = 0; row < r; row++)
            {
                cout<<a[row][col]<<" ";
            }
            // cout<<endl;
        }
        else{
            for (int row = r-1; row >= 0; row--)
            {
                cout<<a[row][col]<<" ";
            }
            // cout<<endl;
        }

    }
}