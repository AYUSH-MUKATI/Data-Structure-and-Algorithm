#include<bits/stdc++.h>
using namespace std;


bool Compare(char a[], char b[]){
    int i =0, j=0;
    int lena = strlen(a), lenb = strlen(b);

    while (i < lena && j<lenb)
    {
        if(a[i] != b[j]){
            return false;
        }
        i++;
        j++;
    }
    if(a[i] != '\0' or b[j] != '\0'){
        return false;

    }
    else{
        return true;
    }
    
}

void concat(char a[], char b[]){
    int i = strlen(a);
    int lenb = strlen(b);

    for (int j = 0; j <= lenb; j++)
    {   
        a[i] = b[j];
        i++;
    }    
    
}


int main(){
    char a[2000];
    char b[1000];

    cin.getline(a, 2000);
    cin.getline(b, 1000);


    // if(Compare(a,b) == true){
    if(strcmp(a,b) == 0){        //strcmp returns 0 if string matches 
        cout<< "Match"<<endl;       // strcmp returns 1 if the string doesn't match.
    }else{
        cout<<"Doesn't Match."<<endl;
    }
    // cout<<"Before Concatenation a: "<<a<<endl;
    // cout<<"Before Concatenation b: "<<b<<endl;

    // concat(a,b);
    // strcat(a,b);


    // cout<<"After Concatenation a: "<<a<<endl;
    // cout<<"After Concatenation b: "<<b<<endl;
}