#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int n,row, col;
  cin>>n;
  for(row = 1;row<=n;row++){
      for(col=row;col<=n-1;col++){
          cout<<" ";
      }
      for(col=1; col<=n;col++){
        if(row==1 || row==n){
          cout<<"*";
        }   
      }
    if(row>1 & row<n){
        cout<<"*   *";
    }   
      cout<<endl;
  }
  
}
