// SubArray  is a continuous set of numbers present in an Array.

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

int main(){
    
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(int);
    GenerateSubArrays(a, n);
    
}