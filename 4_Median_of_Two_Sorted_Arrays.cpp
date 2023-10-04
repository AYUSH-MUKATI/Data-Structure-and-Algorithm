#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size() );
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        int s = merged.size();
        
        double ans;
        double half = s/2;
        if(s % 2 == 0){
            double add = merged[half] + merged[half-1];
            ans = add / 2;
        }else{
            ans = merged[half] ;
        }
        
        return ans;
}


int main(){

    vector<int> nums1, nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums2.push_back(3);
    nums2.push_back(4);

    double ans = findMedianSortedArrays(nums1, nums2);
    cout<<ans;
}