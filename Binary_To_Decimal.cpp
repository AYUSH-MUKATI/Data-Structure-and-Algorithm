#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin>>N;
    int a = 0;
    int sum = 0;
    while(N!=0){
        int digit = N%10;
        sum += (digit*(pow(2,a)));
        N /= 10;
        a++;
    }
    cout<<sum<<endl;
}