#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N, no;
    cin>>N;
    
    int ans = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin>>no;
        ans = (ans^no);
        
    }
    
    cout<<"Unique number: "<<ans<<endl;
    
}