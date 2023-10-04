#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<vector<int>> accounts{
        {2,8,7},
        {7,1,3},
        {1,9,5}
    };
    int n = accounts.size();
    int sum = 0;
    for(int i = 0; i<accounts.size(); i++){
        int s = 0;
        for(int j = 0; j<accounts[i].size(); j++){
            s += accounts[i][j];
        }
        if(s > sum ){
            sum = s;
        }
    }
    cout<<sum;
}