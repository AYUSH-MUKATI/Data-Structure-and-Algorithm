#include<iostream>
using namespace std;

int main(){

    int n,i,no;
    cin>>n;
    for(no = 2; no<=n; no = no + 1 ){
        for(i = 2; i < no; i = i+1){
            if(no % i == 0){
                break;
            }
        }    
        if(i == no){
            cout<<no<<" ";   
        }
    }
    return 0;
}