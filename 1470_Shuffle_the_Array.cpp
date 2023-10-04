#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> nums{2,5,1,3,4,7};
    int n = 3;
    int s = nums.size();
    vector<int> ans(s);
    int m = 0;
    int p = n;
    for( int i = 0; i<s; i = i+2){
        ans[i] = nums[m];
        ans[i+1] = nums[p];
        m++;
        p++;
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    

}