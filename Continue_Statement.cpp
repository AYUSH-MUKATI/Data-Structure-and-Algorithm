#include<iostream>
using namespace std;

int main(){

    int i = 0;

    while(i <= 10){
        
        if(i == 3){
            i = i + 1;
            continue;
        }
        cout<<i;
        i = i + 1;
    }
}