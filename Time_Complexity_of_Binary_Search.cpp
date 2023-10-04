#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int key ){
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid]> key){
            e = mid -1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
    
}
 
int main(){
    int n;
    cin>>n;
    int a[] = {1, 2, 3, 4, 5};
    int key  = 2;
    cout<<BinarySearch(a, n, key);


}

Complexity of Binary Search --> O(LogN)

N > N LogN > N^2

Time Complexity in Recurrsion is exponential --> O(2^N)
can use upto N = 20 

