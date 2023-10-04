#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N;
    cin>>N;
    string num;
    while(N!=0){
        int digit = N%8;
        string s = to_string(digit);
        num += s;
        N /= 8;
    }
    reverse(num.begin(),num.end());
    int number = stoi(num);
    cout<<number<<endl;
}