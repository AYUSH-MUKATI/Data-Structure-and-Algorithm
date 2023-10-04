#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int i = 2;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            break;
        }
    }
    if(i==n){
        cout<<"Prime";
    }

}
