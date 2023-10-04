#include<bits/stdc++.h>
using namespace std;
 

void readLine(char a[], char delimeter){
    int i = 0;
    char ch = cin.get();
    while (ch != delimeter)
    {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
    

}

int main(){
    char a[100];
    readLine(a,'\n');
    cout<<a<<endl;
}