#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a[4] = {4, 8, 12, 2};
    int n =4;
    int N,i;
    cin>>N;

    for(i = 0; i<n; i++){
        if(a[i] == N){
            cout<<"Key Found at index "<<i<<endl;
            break;
        }
    }
    if(i == n){
            cout<<"Key Not Found"<<endl;
    }

}