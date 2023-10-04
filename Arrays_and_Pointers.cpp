#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            // a[j] = *(a + j);
            // a[j+1] = *(a + j + 1);
            if(*(a+j) > *(a+j+1)){
                swap(*(a+j), *(a+j+1));
            }
        }
        
    }
    
}

void PrintArray(int *a, int n){
    cout<<"Inside Functions : "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<*(a + i)<<" ";

    }
    cout<<endl;

}
 
int main(){
    int a[] = {6, 5, 4, 3, 2, 1};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    PrintArray(a,n);
    BubbleSort(a,n);
    PrintArray(a,n);

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<*(a + i)<<" ";

    // }
    // cout<<endl;
    
}