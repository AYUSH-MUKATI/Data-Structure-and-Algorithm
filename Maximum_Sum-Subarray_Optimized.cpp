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
            if(max_sum < sum){
                max_sum = sum;
                wi = i;
                wj = j;
            }
        }
    }
    for (int  i = wi; i <= wj; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Max Sum : "<<max_sum<<endl;

}

void MaximumSumSubArrays2(int a[], int n){
    int max_sum = INT_MIN;
    int wi, wj;
    int csum[1000] = {0};

//precomputed the cumulative sum 

    for (int i = 1; i < n; i++)
    {
        csum[i] += csum[i-1] +a[i];

    }
    
    for(int i = 0; i < n; i++){
        for(int j = i; j <= n-1; j++){
            int sum = 0;
            sum = csum[j] - csum[i-1];

            // for(int k=i; k<=j; k++){
            //     sum += a[k];
            // }
            if(max_sum < sum){
                max_sum = sum;
                wi = i;
                wj = j;
            }
        }
    }

    for (int  i = wi; i <= wj; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Max Sum subarray 2 : "<<max_sum;

}



int main(){
    
    int a[] = {0, -1, 2, -2, 3, 6, -4, -3};
    int n = sizeof(a)/sizeof(int);
    MaximumSumSubArrays(a, n);
    MaximumSumSubArrays2(a,n);
    
}