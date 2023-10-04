// Bubble Sort is a sorting algorithm. In Bubble Sort we start the comparison of numbers in pairs.
// we will start with the 0th index we take 0th index and the first index if the smaller index is greater
// than the next then we will swap the elements.

#include<bits/stdc++.h>
using namespace std;
 
// int main(){
//       int a[]  = {5, 9, 7, 4, 2};
//       int n  = 5;
//       for(int i= 0; i<n; i++) {
//         for(int j = i+1; j<n;j++){
//                 if(a[i]>a[j]){
//                     //swap(a[i], a[j]);
//                     int temp = a[i];
//                     a[i]  = a[j];
//                     a[j] = temp;
//                 }      
//         }
//         cout<<a[i]<<" ";
//       }
// }

int main(){
    int a[] = {5,4,3,2,1};
    int n = 5;

    for (int i = 0; i <= n-2; i++){
        for(int j = 0; j<=n-2; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
      
}
