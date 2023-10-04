
#include<bits/stdc++.h>
using namespace std;

void GenerateSubArrays(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j <= n-1; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<< " ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

}

void MaximumSumSubArrays(int a[], int n){
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i; j <= n-1; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += a[k];
            }
            if(sum > max_sum){
                max_sum = sum;
            }
            // cout<<endl;
        }
        
        
    }
    cout<<"Max Sum : "<<max_sum;

}

int main(){
    
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(int);
    MaximumSumSubArrays(a, n);
    
}