#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    int mask = (1 << 30);
    bool   isOneFound = false;
    while (mask != 0)
    {   
        if((mask & n) == 0 and isOneFound == false){
                mask = mask >> 1;
                continue;
        }else{
            isOneFound = true;
            if( (mask & n) > 0){
                cout<<1;
            }else{
                cout<<0;
            }
            mask = mask >> 1;
        }
    }
    cout<<endl;
    
}

int main(){
    int n;
    cin>>n;

    decimalToBinary(n);
}