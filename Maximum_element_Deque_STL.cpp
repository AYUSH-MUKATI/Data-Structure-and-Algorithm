#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    int a[100000];
    int k;
    
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cin>>k;

    // we have to prrocess first k element separetely
    deque<int> q(k);
    int i;
    for(i = 0; i<k; i++){
        while(!q.empty() and a[i] > a[q.back()]){

            q.pop_back();
        }
        q.push_back(i);
    }
    // process the remaining element 
    for(;i<n;i++){
        cout<<a[q.front()]<<" ";
        // 1. remove the elements which are not the part of the window
         while(!q.empty() and q.front()<= i-k){
            q.pop_front();
         }

        // 2. Remove the elements which are not useful and are in window
        while(!q.empty() and a[i] >= a[q.back()]){
            q.pop_back();
        }
        // 3. add the new elements 
        q.push_back(i);

    }
    cout<<a[q.front()];

    

    return 0;
}