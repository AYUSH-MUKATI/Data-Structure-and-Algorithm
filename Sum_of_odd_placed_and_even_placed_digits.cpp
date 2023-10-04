#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int N; 
    int even = 0;
    int odd = 0;
    cin>>N;
    int position = 1;
    while (N != 0) {
        int digit = N % 10;
        
        if (position % 2 == 0) {
            even += digit;
        } else {
            odd += digit;
        }
        N /= 10;
        position++;
    }

    cout<<even<<endl;
    cout<<odd<<endl;
    


    
}