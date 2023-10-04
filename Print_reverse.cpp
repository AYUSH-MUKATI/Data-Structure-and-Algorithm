#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    reverse(s.begin(),s.end());
    int num = stoi(s);
    cout<<num<<endl;
}

