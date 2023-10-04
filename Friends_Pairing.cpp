#include<bits/stdc++.h>
using namespace std;

int friends(int n){
    // base case
    if(n == 0 || n == 1){
        return 1;
    }
    
    // recursive case

    return friends(n-1) + (n-1) * friends(n-2);

}

int main(){
    int n;
    cin>>n;

    cout<<friends(n)<<endl;

    return 0;


}