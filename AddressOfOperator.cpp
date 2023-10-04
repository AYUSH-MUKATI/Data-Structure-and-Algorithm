// To get the address of a bucket we can write (&Bucket_Name) this would return the address of the bucket 

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a = 10;
    float f = 10.11;
    char ch = 'A';

    cout<<&ch<<endl;
    int arr[] = {1, 2, 3, 4};
    char ch_arr[10] = "Hello";

    cout<<ch_arr<<endl;
    cout<<arr<<endl;

    cout<<a<<endl;
    cout<<&a<<endl;

    cout<<f<<endl;
    cout<<&f<<endl;
}