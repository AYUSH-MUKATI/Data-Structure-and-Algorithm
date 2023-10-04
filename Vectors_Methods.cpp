#include<bits/stdc++.h>
using namespace std;
 
int main(){

    vector<int> d{1, 2, 3, 4, 5};
    // push_back() O(1);
    d.push_back(6);

    // pop_back O(1)
    d.pop_back(); // removes the last element

    // insert some elements in the middle  O(N)
    d.insert(d.begin()+3, 4, 10);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;



    // erase some element in the middle 
    d.erase(d.begin()+3);
    d.erase(d.begin()+3, d.begin()+5);

    
    // remove all elements of the vector doesnt delete the memory occupied by the array 
    d.clear();

    
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;


    // Reserve
    int n;
    cin>>n;
    vector<int> v;
    v.reserve(1000);
    // To avoid doubling we will use reserve func

    for(int i = 0; i<n; i++){
        int no;
        cin>>no;
        v.push_back(no);

    }

    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}