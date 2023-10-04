#include<bits/stdc++.h>
using namespace std;

// void  DecimalToBinary(int n){
//     int p = 1;
//     int ans = 0;
//     while (n>0)
//     {
//         ans += (n%2)*p;
//         p *= 10;
//         n /= 2;

//     }
//     cout<<ans<<endl;
    
// }
void  DecimalToBinary(int n){
    int p = 1;
    string s;
    while (n>0)
    {
        // ans += (n%2)*p;
        // p *= 10;
        // s.push_back('0' + n%2);
        if(n%2 == 0){
            s.push_back('0');
        }else{
            s.push_back('1');
        }
        n /= 2;

    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    
}

void decimalToBinaryBitwise(int n){
    int p = 1;
    int ans = 0;
    while (n>0)
    {
        ans += (n&1) * p;
        p *= 10;
        n >>= 1;
    }
    cout<<ans<<endl;
    
}

int main(){

    int n;
    cin>>n;

    cout<<"First: "<<endl;
    DecimalToBinary(n);
    cout<<"Second: "<<endl;
    decimalToBinaryBitwise(n);

}
