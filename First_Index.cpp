#include<bits/stdc++.h>
using namespace std;
 

int FirstOccurence(int *a, int n, int i, int key) {
    if (i == n)     
    {
        return -1;
    }

    if (a[i] == key)
    {
        return i;
    }

    return FirstOccurence(a, n, i+1, key);
    
    
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int m;
    cin>>m;
    cout<<FirstOccurence(a, n, 0, m)<<endl;
 
}