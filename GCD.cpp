#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n1,n2;
    int num = 0;
    cin>>n1;
    cin>>n2;
    int rem;
    while(rem!=0){
        rem = n1%n2;
        if(rem == 0){
            cout<<n2;
        }   
        n1 = n2;
        n2 = rem;
    }
}