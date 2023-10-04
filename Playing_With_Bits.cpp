#include<bits/stdc++.h>
using namespace std;


int countSetBits(int n){
    // int n;
    
    int ans = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            ans++;
        }
        n = n >> 1;
    }

    // cout << "Number of set bits is: " << ans << endl;
    return ans;
}


int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        int ans = 0;
        for ( int i = a; i <= b; i++)
        {
            ans += countSetBits(i);
        }
        cout<<ans<<endl;
    }

}