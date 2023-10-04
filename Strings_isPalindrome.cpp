#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char a[]){
    int i = 0, j = strlen(a) - 1;
    bool result;
    while(i<j){
        if(a[i] != a[j] ){
            result = false;
            break;
        }
        i++;
        j--;
    }
    if(i == j){
        result =  true;
    }
    return result;

}

int main(){
    char a[1000];
    cin>>a;

    if(isPalindrome(a) == true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}