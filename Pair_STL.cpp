#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int,int> p(500,200);
    // pair<int, int> p;
    // p.first = 10;
    // p.second = 20;
    // pair<int, int> p;
    // p = make_pair(22, 42);

    // pair<string, int> p;
    
    // p = make_pair("BMW",10);
 
    // cout << p.first << endl;
    // cout << p.second << endl;

    pair<string, pair<float, int> > p;
    p.first = "BMW";
    p.second.first = 10.11;
    p.second.second = 12;

    cout<<p.first<<endl;             
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
}