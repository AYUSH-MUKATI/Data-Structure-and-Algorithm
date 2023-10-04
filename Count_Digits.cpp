#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int num;
    int count = 0; 
    cin>>num;
    int digit;
    cin>>digit;
    while(num!=0){
        int n = num%10;
        if(n==digit){
            count++;
        }
        num /= 10;
    }
    cout<<count<<endl;
}