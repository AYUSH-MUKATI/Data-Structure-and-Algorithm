// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int arr[] = {5, 4, 8, 7, 10};
    int n  = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int *ans = find(arr, arr+n, key);
    int indx = ans - arr;
    if (indx == n)
    {
        cout<<"Key is not found."<<endl;
    }else{
        cout<<"Key is  found at index: "<<indx<<endl;
    }
    
}