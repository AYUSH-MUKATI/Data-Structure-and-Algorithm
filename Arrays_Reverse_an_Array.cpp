#include<bits/stdc++.h>
using namespace std;


void reverseArray(long long a[], long long n){
    int num = n;
    for(int i = 0; i<n; i++){
        int temp = a[i];
        a[i] = a[n-1];
        a[n-1] = temp;
        n--;
    }
    
    
}
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverseArray(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

}