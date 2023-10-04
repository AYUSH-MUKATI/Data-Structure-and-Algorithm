#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
 
int main(){
    int arr[] = {1, 3, 5, 7, 8, 100};
    int n  = sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    bool present = binary_search(arr, arr+n, key);

    if(present == true){
        cout<<"Key is present."<<endl;
    }else{
        cout<<"Key is not present."<<endl;
    }

}