#include<bits/stdc++.h>
using namespace std;
 
int LinearSearch(int a[], int n, int m){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(m ==a[i]){
            
            break;
        }
    }
    
    if(i == n){
        return -1;
    }else{
        return i;
    }

}

int main(){
    int n;
    cin>>n;
    int a[n];
    int m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    
    int target = LinearSearch(a,n,m);
    cout<<target;
    
}