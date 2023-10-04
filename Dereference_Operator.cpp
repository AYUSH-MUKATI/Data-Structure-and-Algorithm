#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int x = 10;
    int *y = &x;

    cout<<"&x: "<<&x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"&y: "<<&y<<endl;
    cout<<"*(&x): "<<*(&x)<<endl;
    cout<<"&(*y): "<<&(*y)<<endl;
    

}