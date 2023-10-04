#include<bits/stdc++.h>
using namespace std;
 
int main(){
    queue<char> q;
    int freq[27] = {0};
    // running a stream until a '.';
    char ch;
    cin>>ch;
    while(ch != '.'){
        // insert in the q anf f table
        q.push(ch);
        freq[ch - 'a']++;

        // query
        while(!q.empty()){
            int element  = q.front()  - 'a';
            if(freq[element] > 1){
                q.pop();
            }
            else{
                cout<<q.front()<<endl;
                break;
            }
        }

        if(q.empty()){
            cout<<"-1"<<endl;
        }
        cin>>ch;
    }
}