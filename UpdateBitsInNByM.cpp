// #include<bits/stdc++.h>
#include<iostream>
using namespace std;


void clearRange(int &n, int j, int i)
{
    int ma = (~0);
    ma = ma << j;
    // int mb = 2^i-1
    int mb = (1 << i) - 1;
    int mask = ma | mb;
    n = n & mask;
} 

void updateBits(int &n, int m, int i, int j){
        // 1. Update m
        m = m << (i-1);

        //2. Uodate or clear the range of n(j, i-1)
        clearRange(n, j, i-1);

        //3. Update n
        n = n|m;

}

int main(){
    int n = 15;
    int m = 2;
    int i =2;
    int j = 4;

    updateBits(n,m,i,j);
    cout<<"N: "<<n<<endl;

}