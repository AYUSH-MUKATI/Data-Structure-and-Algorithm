#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> candies{12,1,12};
    int n = candies.size();
    vector<bool> ans(n);
    int extraCandies = 10;
    int maximum = *max_element(candies.begin(), candies.end());
    
    for(int i = 0; i<n; i++){
        int ccandies = candies[i] + extraCandies;
        if(ccandies >= maximum){
            ans[i] = true;
        }else{
            ans[i] = false;
        }

    }
    for(int x:ans){
        cout<<x<<" ";
    }
}