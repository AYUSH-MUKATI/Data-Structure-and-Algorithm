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
bool  ArmstrongNo(int n){
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
        return true;
    }else{
        return false;
    }
} 
int main(){
    int n1,n2,n;
    cin>>n1>>n2;
    for(int i = n1; i<=n2; i++){
        
        bool is_armstrong = ArmstrongNo(i);
        if(is_armstrong == true){
            cout<<i<<endl;
        }
    }

}