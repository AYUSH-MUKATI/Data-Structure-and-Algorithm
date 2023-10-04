#include<bits/stdc++.h>
using namespace std;


void MaximumSumSubArrays(int a[], int n){
    int max_sum = INT_MIN;
    int wi, wj;

    for(int i = 0; i < n; i++){
        for(int j = i; j <= n-1; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            if(sum > max_sum){
                max_sum = sum;
                wi = i;
                wj = j;
            }
        }
        
        
    }
    cout<<"Maximum sum subArray is : "<<endl;
    for (int  i = wi; i <= wj; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Max Sum : "<<max_sum;

}

int main(){
    
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(int);
    MaximumSumSubArrays(a, n);
    
}