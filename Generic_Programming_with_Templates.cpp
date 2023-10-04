#include<bits/stdc++.h>
using namespace std;

// linear search
template<typename T>

int search(T a[], int n, T key){

    for(int i = 0; i< n; i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int a[] = {1, 2, 3, 4, 10, 5, 6 };
    int n = sizeof(a)/sizeof(int);
    int key = 10;
    // cout<<search(a, n, key);

    double b[] = {1.1, 1.2, 1.3};
    cout<<search(b, 3, 1.2)<<endl;

    return 0;
}