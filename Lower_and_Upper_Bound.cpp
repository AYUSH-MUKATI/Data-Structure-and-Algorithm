#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a[] = {10, 20, 40, 40, 40, 50, 60, 100};
    int n = sizeof(a)/sizeof(int);

    int key;
    cin>>key;

    int *ans = lower_bound(a, a+n, key);
    cout<<"Value : "<<*ans<<endl;
    cout<<"first occurence of " <<*ans <<" is at: "<<ans - a<<endl;

    int *x = upper_bound(a, a+n, key);
    cout<<"Value : "<<*x<<endl;
    cout<<"last occurence of " <<*ans <<" is at: "<<x - a -1<<endl;


    cout<<"Number of occurances of "<<*ans<<": "<<x - ans<<endl;
    
}