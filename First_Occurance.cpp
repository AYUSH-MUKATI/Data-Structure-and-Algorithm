#include<bits/stdc++.h>
using namespace std;

int FirstOccurence(int *a, int n, int key){
    //Base Case
    if(n == 0){
        return -1;
    }

    //Recursive Case
    if(a[0] == key){
        return 0;
    }
    int i = FirstOccurence(a + 1, n - 1, key);
    if(i == -1){
        //key is not found 
        return -1;
    }
    return i + 1;
}

int FirstOccurencei(int *a, int n, int i, int key) {
    if (i == n)     
    {
        return -1;
    }

    if (a[i] == key)
    {
        return i;
    }

    return FirstOccurencei(a, n, i+1, key);
    
    
}


int main(){
    int a[] = {1, 1, 6, 3, 4, 3, 3, 7 };
    int n = sizeof(a) / sizeof(int);


    cout<<FirstOccurence(a, n, 3)<<endl;
    cout<<FirstOccurencei(a, n, 0,  3)<<endl;
}