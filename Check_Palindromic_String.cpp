#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char a[]){
    int i = 0, j = strlen(a) - 1;
    while(i<j){
        if(a[i] != a[j] ){
            return false;
        }
        i++;
        j--;
    }
    if(i == j){
        return true;
    }

}

int main(){
    char a[1000];
    cin>>a;

    if(isPalindrome(a) == true){
        cout<<"String is a Palindrome."<<endl;
    }else{
        cout<<"String is Not a Palindrome."<<endl;
    }

}