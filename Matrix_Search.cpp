
#include<bits/stdc++.h>
using namespace std;
 
bool  StairCaseSearch(int a[100][100], int n, int m, int key){
    int i = 0, j = m-1;
    bool isKeyPresent = false;
    while(i<n and j>=0){
        if(a[i][j] == key){
            isKeyPresent = true;
            return true;
            
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
        return false;
    }
    
}

int main(){
    int a[100][100];
    int r, c;
    cin>>r>>c;
    
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            cin>>a[row][col];
    
        }
    }
    int key;
    cin>>key;
    cout<<StairCaseSearch(a, r, c,key);

}