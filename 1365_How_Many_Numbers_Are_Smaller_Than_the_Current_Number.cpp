#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> nums{7,7,7,7};
    vector<int> ans;
    
    for(int i = 0; i<nums.size(); i++){
        int count = 0;
        for(int j = 0; j< nums.size(); j++){
            if(nums[i] > nums[j]){
                count++;
            }
        }
        ans.push_back(count);
    }

    for(int x:ans){
        cout<<x<<" ";
    }
}