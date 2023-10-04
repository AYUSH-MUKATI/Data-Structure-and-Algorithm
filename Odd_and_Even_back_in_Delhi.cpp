#include<bits/stdc++.h>
using namespace std;

int Even(int N){
    int even = 0;
    while (N != 0) {
        int digit = N % 10;
        
        if (digit % 2 == 0) {
            even += digit;
        } 
        N /= 10;
        
    }
    return even;
}

int Odd(int N){
    
    int odd = 0;
    while (N != 0) {
        int digit = N % 10;
        
        if (digit % 2 != 0) {
            odd += digit;
        } 
        N /= 10;
    }
    return odd;
}

int main(){
    int N;
    cin>>N;
    for(int i =1; i<=N; i++){
        int n;
        cin>>n;
        int even = Even(n);
        int odd = Odd(n);
        if(even %4 ==0 || odd % 3 ==0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}