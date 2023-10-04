#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    int first = 0;
    int second = 1;
    int next =0;
    if(n==0){
        return first;
    }else if(n==1){
        return second;
    }else{
        for(int i =2; i<=n; i++){
            next = first + second;
            first = second;
            second = next;
        }
        return next;
    }    
}

int main(){

    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans<<endl;

}