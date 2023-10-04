#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N,num;
    cin>>N;
    
    for(int i=0;i<N;i++){
        int a = 0;
        int sum = 0;
        cin>>num;
        while(num!=0){

            int digit = num%10;
            sum += (digit*(pow(2,a)));
            num /= 10;
            a++;
        }
        cout<<sum<<endl;
    }       
   
}