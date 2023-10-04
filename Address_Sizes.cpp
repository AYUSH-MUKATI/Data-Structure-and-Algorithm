#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a  = 10;
    float f = 10.11;
    char ch = 'A';

    int *aptr = &a;
    float *fptr = &f;
    char *chptr =  &ch;

    cout<<sizeof(aptr)<<endl;
    cout<<sizeof(fptr)<<endl;
    cout<<sizeof(chptr)<<endl;

}