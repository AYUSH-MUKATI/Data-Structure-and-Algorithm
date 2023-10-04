//staircase Search 
// One of the fastet way to search in a matrix. consider that given array is sorted row and column wise.

#include<bits/stdc++.h>
using namespace std;
 
void  StairCaseSearch(int a[4][4], int n, int m){
    int i = 0, j = m-1;
    int key = 2;
    bool isKeyPresent = false;
    while(i<n and j>=0){
        if(a[i][j] == key){
            cout<<"Key Found at index: "<<i<<", "<<j<<endl;
            isKeyPresent = true;
            break;
        }
        else if(a[i][j] < key){
            i++;
        }
        else if(a[i][j] > key){
            j--;
        }
    }
    if (isKeyPresent == false)
    {
        cout<<"Key Not Found."<<endl;
    }
    
}

int main(){
    int a[4][4] = {
        {1, 4, 8, 10},
        {2, 5, 9, 15},
        {6, 13, 18, 20},
        {11, 14, 21, 25}
    };
    int n = 4,  m = 4;
    StairCaseSearch(a, n, m);

}