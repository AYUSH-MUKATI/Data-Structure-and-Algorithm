#include<bits/stdc++.h>
using namespace std;
 
int length(char a[]){
    int i;
    for (i = 0; a[i] != '\0' ; i++)
    {
        
    }
    return i;
    
}

int main(){

    char a[1000];
    cin.getline(a,1000);
    
    int  ans  = length(a);
    cout<<ans<<endl;

    //Inbuilt function to find the length of array
    //strlen(name_of_array)
    cout<<strlen(a)<<endl;

}