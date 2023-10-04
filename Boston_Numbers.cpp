#include<bits/stdc++.h>
using namespace std;

void BostonNo(int n){
    
    int sum = 0;
    int rem;
    for(int i = 2; i<=n/2; i++){
        rem = n%i;
        if(rem == 0){
            cout<<i<< " ";
            sum += i;
        }    
    }
    cout<<endl;
    cout<<sum;
}


int main(){
    int n; 
    cin>>n;
    BostonNo(n);

}
