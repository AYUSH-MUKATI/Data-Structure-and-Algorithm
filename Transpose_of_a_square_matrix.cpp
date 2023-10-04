#include<bits/stdc++.h>
using namespace std;


void Transpose(int a[][100], int n){
   
    
    
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            if(i<j){
                swap(a[i][j], a[j][i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    
    }
    
}

int main(){
    int a[100][100];
    int n; 
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    
    }
    Transpose(a,n);
    
}
