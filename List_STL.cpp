#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;
    // initialize

    list<int> l1{1, 2, 3, 4, 5};
    // diff datatype
    list<string> l2{"apple", "guava", "mango", "banana"};
    l2.push_back("pineapple");

    // sort 
    l2.sort();

    // // reverse
    // l2.reverse();

    // l2.pop_front();

    // l2.push_front("kivi");

    // l2.pop_back();

    // iterate over the list

    // for(auto it = l2.begin();it!= l2.end();it++){
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;

    l2.push_back("orange");
    l2.push_back("grapes");
    l2.push_back("guava");
    
    for(auto s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    // remove a fruit
    // string f;
    // cin>>f;
    // l2.remove(f);

    

    // erase one or more element 
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);
    for(auto s:l2){
        cout<<s<<" ";
    }
    cout<<endl;

    it = l2.begin();
    it++;
    l2.insert(it,"fruits");
    for(auto s:l2){
        cout<<s<<" ";
    }
    cout<<endl;


}