#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int> nums{1,2,3};
    int n = nums.size();
    int count = 0;
    for(int i = 0; i<n; i++){
        int j = n-1;
        while(i<j){
            if(nums[i] == nums[j]){
                count++;
            }
            j--;
        }
    }
    cout<<count;
}