#include<bits/stdc++.h>
using namespace std;
 
int main(){
    //bitwise and = &
    int a = 7;
    int b =5;
    cout<<"bitwise and of 7 and 5 :"<<(a&b)<<endl;
    cout<<"bitwise and of 8 and 5 :"<<(8&5)<<endl;
    //bitwise or = |
    cout<<"bitwise or of 7 and 5 :"<<(a|b)<<endl;
    cout<<"bitwise or of 8 and 5 :"<<(8|5)<<endl;
    //bitwise xor = ^
    cout<<"bitwise xor of 7 and 5 :"<<(a^b)<<endl;
    cout<<"bitwise xor of 8 and 5 :"<<(8^5)<<endl;
    
    //Left shift Operator
    //a = a<<b => a = a*(2^b)
    int x = 1;
    cout<<"After Left Shift : "<<(x<<2)<<endl;
    cout<<"After Left Shifting 7 with 5 : "<<(a<<b)<<endl;

    //Right Shift Operator
    //a = a>>b  =>  a = a/(2^b)
    int y = 8;
    cout<<"After Right Shift : "<<(y>>2)<<endl;
    cout<<"After Right Shifting 7 with 5 : "<<(a>>b)<<endl;

    //Bitwise NOT

    cout<<"Bitwise Not of 7 :"<<(~8)<<endl;

}
