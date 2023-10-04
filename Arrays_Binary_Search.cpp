#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;

    // for (int i = 0; i < n; i++)
    // {
    //     bool present = binary_search(a, a+i, m);
    //     if(present == true){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     bool present  = binary_search(a, a+i, m);
    //     if(present == true){
    //         cout<<i-1<<endl;
    //         break;
    //     }

    // }
    int i = 0;
    while(i == n){
        bool present = binary_search(a, a+i, m);
        if(present == true ){
            cout<<i;
            break;
        }
        i++;
    }
    cout<<endl;
    cout<<i;
   
    
    
    
}