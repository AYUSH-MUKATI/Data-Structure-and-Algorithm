#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int cnt[64] = {0};
    for(int i= 0; i<n; i++){
        int pos = 0;
        int no = a[i];
        while (no > 0)
        {   
             if( (no & 1) == 1 ){
                cnt[pos]++;
            }
            pos++;
            no >>= 1; 

        }
    }
    int ans = 0;
    int p = 1;
    for (int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
        ans += cnt[i] * p;
        p <<= 1;
        
    }

    cout<<ans<<endl;


        
}