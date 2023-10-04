#include<bits/stdc++.h>
using namespace std;
 
int main(){

    char ch;
    cin>>ch;
    //N: North, S: South, E: East, W: West
    switch (ch)
    {
    case 'N':
        cout<<"North"<<endl;
        break;
        
    case 'S':
        cout<<"South"<<endl;
        break;

    case 'E':
        cout<<"East"<<endl;
        break;

    case 'W':
        cout<<"West"<<endl;
        break;

    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}