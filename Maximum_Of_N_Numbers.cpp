#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    int i = 1;
    int num;
    int largest_num = INT_MIN;
    cout<<"Enter number:";
    cin>>n;
    while(i <= n){

        cin>>num;
        if(largest_num < num){
            largest_num = num;
        }
        i = i + 1;
    }
    cout<<"Largest num: "<<largest_num<<endl;
    return 0;

}