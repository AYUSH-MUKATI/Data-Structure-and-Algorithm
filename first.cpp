#include<bits/stdc++.h>
using namespace std;

//Lets create a function to print hello world

void HelloWorld(){
    cout<<"Hello World!"<<endl;
}

// void Multiply(int N1, int N2){
//     cout<<N1*N2<<endl;
// }

int Multiply(int N1, int N2){
    return N1*N2;

}

int main(){
    int N1,N2;
    cin>>N1>>N2;
    HelloWorld(); //call or invoke the function 
    int ans = Multiply(N1,N2); //n1*n2
    cout<<ans+10;

}