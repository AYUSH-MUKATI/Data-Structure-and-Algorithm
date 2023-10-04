#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n1,n2;
    int num = 0;
    cin>>n1;
    cin>>n2;
    int N1 = n1;
    int N2 = n2;
    int rem;
    int GCD = 0;
    while(rem!=0){
        rem = n1%n2;
        if(rem == 0){
            GCD += n2;
        }   
        n1 = n2;
        n2 = rem;
    }
    int LCM = (N1*N2)/GCD;
    cout<<LCM<<endl;
}