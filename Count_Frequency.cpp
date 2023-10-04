#include<bits/stdc++.h>
using namespace std;
 
int main(){

    char a[] = "abcbaz";

    int freq[26] = {0};
    // fill the frequency array
    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch =  a[i];
        int indx = ch - 'a';
        freq[indx]++;
    }


    for(int i =0; i<26; i++){
        char x = i + 'a';
        if(freq[i] != 0){
            cout<<"Character "<<x<<" --> "<<freq[i]<<endl;
        }
    }
    cout<<endl;
    
    
}