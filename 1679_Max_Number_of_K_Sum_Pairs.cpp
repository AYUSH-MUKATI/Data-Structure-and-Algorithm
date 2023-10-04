#include<bits/stdc++.h>
using namespace std;

void maxOperations(vector<int>& nums, int k) {
    int n = nums.size();
    int start = nums.front();
    int end = nums.back();

    int operations = 0;
    while(start<end){
        if(nums[start] + nums[end] == k){
            nums.erase(nums.begin() + start);
            operations++;
        }
        start++;
        end--;
    }
    

    // for(int i = 0; i<n; i++){
    //     for(int j = i+1; j<n; j++){
    //         if(nums[i] + nums[j] == k){
    //             cout<<i<<" "<<j<<"  "<<nums[i]<<" "<<nums[j]<<"  "<<endl;

    //             operations++;
    //         }
    //     }
    // }
    
    cout<<operations;
}

int main(){
        
    vector<int> nums;
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(3);
    int k = 6;

    maxOperations(nums, k);

}