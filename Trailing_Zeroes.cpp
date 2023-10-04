#include<bits/stdc++.h>
using namespace std;
 

int Zeroes(int n){
    int ans = 0;
    for(int d = 5; n/d >=1; d *=5){
        ans += n/d;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans  = Zeroes(n);
    cout<<ans<<endl;

}