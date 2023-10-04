#include<bits/stdc++.h>
using namespace std;
 
void Update(int *a){
    
    *a = *a + 1;

    cout<<"Inside Function : "<<*a<<endl;

} 


int main(){
    int x = 10;
    
    Update(&x);
    cout<<"Main Function : "<<x<<endl;

}