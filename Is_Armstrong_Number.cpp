#include<bits/stdc++.h>
using namespace std;
 
int getIntegerLength(int n) {
    if (n == 0) {
        return 1;
    }
    int length = 0;
    while (n != 0) {
        n /= 10;
        length++;
    }
    return length;
}
void  ArmstrongNo(int n){
    int num = n;
    int length = getIntegerLength(n);
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        int power  = pow(digit,length);
        sum  += power;
        n /= 10;
    }
    if(sum == num){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

int main(){
    int n; 
    cin>>n;
    ArmstrongNo(n);
    
}