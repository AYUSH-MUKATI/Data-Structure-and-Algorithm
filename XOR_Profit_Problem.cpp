#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x,y;
    cin>>x>>y;
    int maximum = 0;
    int ans = 0;
    for ( int i = x; i <= y; i++)
    {   
        ans = ((i)^(i+1));
        if(ans > maximum){
            maximum = ans;
        }
    }
    cout<<maximum;
}