#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    int first = 0;
    int second = 1;

    cin>>n;
    int next =0;
    if(n==0){
        cout<<first<<endl;
    }else if(n==1){
        cout<<second;
    }else{
        for(int i =2; i<=n; i++){
            next = first + second;
            first = second;
            second = next;
            if(i==n){
                cout<<next<<endl;
            }
    
        }
    }   
}