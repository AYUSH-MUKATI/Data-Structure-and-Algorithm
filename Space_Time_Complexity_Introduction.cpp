// Time ~ function(N)
// space ~ function(N)

#include<bits/stdc++.h>
#include<ctime>
using namespace std;

void bubble_sort(int a[], int n){
    for (int  i = 0; i < n; i++)
    {
        for(int j = i+1; j< (n); j++ ){
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
            
        }
    }
    
}
 
int main(){
    int n, key;
    cin>>n;
    int a[100000];
    // time_t start  = clock();

    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }

    time_t start  = clock();
    bubble_sort(a, n);
    time_t end  = clock();
    cout<<endl;
    cout<<"Bubble Sort : "<<end-start<<endl;


    for (int i = 0; i < n; i++)
    {
        a[i] = n - i;
    }

    start = clock();
    sort(a, a+n);
    end = clock();
    cout<<endl;
    cout<<"Merge Sort : "<<end-start<<endl;

    
}


Complexity of Bubble sort --> O(N^2);
Complexity of Merge sort  --> O(NlogN)