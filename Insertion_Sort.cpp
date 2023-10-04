// Insertion Sort is a sorting algorithm. In this we pick a element check if it is smaller than the left side 
// element if it is then we will move the element to the right side and check again with our picked element with 
// the next element if it is smaller tham we again check otherwise place it there.

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a[5] = {5, 3, 1, 2, 4};
    int n= 5, i, j;
    cout<<"Before Sorting : ";
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    for ( i = 1; i < n; i++)
    {
        int PUC = a[i];
        for ( j = i-1; j >= 0 and a[j]> PUC; j--) 
        {
            a[j+1] = a[j];
        }
        a[j+1] = PUC;
        
    }
    
    cout<<endl;
    cout<<"After Sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}