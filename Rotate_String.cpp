#include<bits/stdc++.h>
using namespace std;
 

void RotateString(char a[], int n){
    int len = strlen(a);
    int i = len - 1;
    
    while (i >= 0)
    {
        a[i+n] = a[i];
        i--;
    }

    
    i = 0;
    int j = len;
    while (i < n)
    {
        a[i] = a[j];
        i++;
        j++;
    }
    a[len] = '\0';
    
    
    
}

int main(){
    char a[100]  = "Hello world";
    int n; 
    cin>>n;
    cout<<"Beforer Rotation: "<<a<<endl;
    RotateString(a,n);
    cout<<"After Rotation: "<<a<<endl;
}