#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int a[] = {6, 5, 1, 6, 1, 3};
    int n  = sizeof(a)/sizeof(int);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }
    int result = ans;

    // 1. Extract the bit position with value 1, that would mean it will be different in both the unique numbers.
    
    int pos = 0;
    while (ans > 0)
    {
        if( (ans &1) > 0 ){
            break;
        }
        pos++;
        ans >>= 1;
    }

    // we need to start separation of the numbers according to bit pos 
    
    int x = (1 << pos);
    int un1 = 0;
    for (int i = 0; i < n; i++)
    {
        if( (a[i] & x) == 0 ){
            un1 ^= a[i];
        }
    }
    cout<<un1<<endl;
    int un2 = result ^ un1;
    cout<<un2<<endl;
}   