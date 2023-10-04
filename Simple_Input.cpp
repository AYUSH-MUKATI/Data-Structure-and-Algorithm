#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    // cin>>n;
    int no = 0;
    int sum = 0;
    int num[5];
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    for(int i =0;i<5;i++){
         sum += num[i];
         if(sum<no){
             for(int j=1;j<=i;j++){
                 cout<<num[j-1]<<endl;
             }
         }
        
    }

    
}
