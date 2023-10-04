#include<bits/stdc++.h>
using namespace std;
 
int main(){

    // Static Allocation
    int b[100];
    cout<<sizeof(b)<<endl; 

    // Dynamic Allocation 
    int n;
    cin>>n;
    int *a = new int[n]{0};
    cout<<sizeof(a)<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    delete []a;
    


}