#include<bits/stdc++.h>
using namespace std;
 

void RemoveDuplicates(char a[]){
    int len = strlen(a);
    int j = 1, i = 0;
    while (j < len)
    {
        if(a[i] != a[j]){
            i++;
            a[i] = a[j];
        }
        j++;
    }
    a[i+1] = '\0';
    cout<<a<<endl;
    
}

int main(){
    char a[1000];
    cin.getline(a,1000);

    RemoveDuplicates(a);
}