#include<bits/stdc++.h>
using namespace std;
 

bool compare(int a, int b) {
    return a > b;
}
int main(){
    int a[] = {1, 2, 4, 6, 7, 6, 7 };
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    sort(a, a+n, compare); 
    cout<<"After sorting: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    
}