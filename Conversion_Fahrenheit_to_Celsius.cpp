#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int min, max, step;
    int c,f;
    cin>>min>>max>>step;

    
    for(f = min; f<=max;f = f+step){
        c = (f-32)*5/9;
        cout<<f<<"  "<<c<<endl;
    }
}