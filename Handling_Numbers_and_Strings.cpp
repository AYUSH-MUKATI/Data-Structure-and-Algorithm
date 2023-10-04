#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    char a[1000];
    // cin.ignore();
    cin.get();  //Ignore the '\n' after taking input of a number n .
    // We read the ip pointer value  but we did not store it anywhere, thus ignored.
    for (int i = 0; i < n; i++)
    {   
        cin.getline(a,1000);
        cout<<a<<endl;
    }
     

}
