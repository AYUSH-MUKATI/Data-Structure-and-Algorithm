#include<bits/stdc++.h>
using namespace std;

void SpiralPrint(int a[][100], int n, int m){
    int sr = 0, sc = 0, er = n-1, ec = m-1;
    while (sr<=er and sc<=ec)
    {
        //1. print the sr from sc to ec 
        //sr++
        for (int  col = sc; col <= ec; col++)
        {
            cout<<a[sr][col]<<", ";
            
        }
        sr++;

        
        //2. print the ec from sr to er 
        //ec--
        for (int  row = sr; row <= er; row++)
        {
            cout<<a[row][ec]<<", ";
            
        }
        ec--;
        //3. print er from ec to sc
        //er--
        if(sr<er){
            for (int  col = ec; col >= sc; col--)
            {
                cout<<a[er][col]<<", ";
                
            }
            er--;
        }
        //4. print sc from er to sr
        //sc++
        if(sc<ec){        
            for (int  row = er; row >= sr; row--)
            {
                cout<<a[row][sc]<<", ";
                    
            }
            sc++;
        }
    }
    cout<<"END";
    
}


int main(){
    int a[100][100];
    int r, c;
    cout<<"Enter no. of rows and cols: ";
    cin>>r>>c;
    
    for (int row = 0; row < r; row++)
    {
        for (int col = 0; col < c; col++)
        {
            cin>>a[row][col];
    
        }
        
    }
    SpiralPrint(a,r,c);
}