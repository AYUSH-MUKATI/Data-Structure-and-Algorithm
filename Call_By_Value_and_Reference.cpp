#include<bits/stdc++.h>
using namespace std;

int Update(int &a){
    a = a+1;
}


int main(){
    int x =1;
    cout<<"Before update: "<<x<<endl;
    Update(x);
    cout<<"After update: "<<x<<endl;

}