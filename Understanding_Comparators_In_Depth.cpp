#include<bits/stdc++.h>
using namespace std;

void PrintArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

bool compare(int a, int b) {
    return a > b;
}
void BubbleSort(int a[], int n, bool (&mycompare)(int a, int b)) {
    for (int i = 0; i <= n-2; i++){
        for(int j = 0; j<=n-2; j++){
            if(mycompare(a[j], a[j+1])){
                swap(a[j], a[j+1]);
            }
        }

    }
}
int main(){
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);

    cout<<"Before Sorting: "<<endl;
    PrintArray(a, n);

    BubbleSort(a, n, compare);
    cout<<"After Sorting: "<<endl;
    PrintArray(a,n);

}