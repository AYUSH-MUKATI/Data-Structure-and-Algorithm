#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n1,n2;
    int num = 1;
    int count =0;
    cin>>n1;
    cin>>n2;
    while(count <n1){
        
        int s = (3*num+2);
        if(s % n2 != 0){
            cout<<s<<endl;
            count++;
        }
        num++;
        
    }
}
