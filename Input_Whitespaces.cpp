#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int count = 0;
    char ch;
    // cin>>ch;
    //to read whitespaces simply use cin.get()
    ch = cin.get();
    while (ch!='$')
    {
        count++;
        // cin>>ch;
        ch = cin.get();
    }
    cout<<"Total Characters: "<<count<<endl;
}