#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *a, int n){
    //Base case
    if (n == 0 ||n==1)
    {
        return true;
    }

    bool isSmallSorted = isSorted(a+1, n-1);
    if (isSmallSorted &&a[0]< a[1])
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans = isSorted(a, n);
    

    if(ans == true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    

}   