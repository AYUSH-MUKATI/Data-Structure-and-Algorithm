// vectors are dynamic arrays that can grow and shrink their sizes 

#include<bits/stdc++.h>
using namespace std;
 
int main(){

    // Ways in which you can create and initialize a vector 
    vector<int> a;
    vector<int> b(5, 10);//five integers with value 10  - init a vector of zeroes (n, 0);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 3, 4, 5};

    // Look at how we can iterate over the vector 
    for(int i = 0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    for(auto it = b.begin(); it!= b.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // for each loop
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;


    // Take user input
    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++ ){
        int no;
        cin>>no;
        v.push_back(no);

    }

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    // At memory level what are the differences in v and d 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;//size of underlying array
    cout<<v.max_size()<<endl; // maximum no of elements a vector can hold in the worst case acc to available memory in the system

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;//size of underlying array
    cout<<d.max_size()<<endl;


}