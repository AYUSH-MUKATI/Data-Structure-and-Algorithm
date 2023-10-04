#include<bits/stdc++.h>
using namespace std;
 
void PrimeNumbers(int n){
    int i,no;
    for( no = 2; no<=n; no = no + 1 ){
        for(i = 2; i < no; i = i+1){
            if(no % i == 0){
                break;
            }
        }    
        if(i == no){
            cout<<no<<" ";   
            
        }
    }
}

int main(){
    int n;
    cin>>n;
    PrimeNumbers(n);

    
}