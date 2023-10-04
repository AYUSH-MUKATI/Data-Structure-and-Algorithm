#include<bits/stdc++.h>
using namespace std;
 


int main(){
    long long int n;
    cin>>n;
    string number = to_string(n);

    int l = number.length();
    for(int i =1; i<l; i++){
        if(number[i] == '0'){
            number[i] = '5';
        }
        
    }
    
    cout<<number<<endl;
}

