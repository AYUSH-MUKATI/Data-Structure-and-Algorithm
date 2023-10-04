// #include<iostream>
// using namespace std;

// int main(){
    
    
//     int i = 0;

//     while(i<=10){
//         if(i == 5){
//             break;
//         }
//         cout<<i<<" ";
//         i = i + 1;
//     }
// }



#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int i = 1;
    while(i>=1){
        cout<<i<<" ";
        if(i == n){
            break;
        }
        i = i + 1;
    }

}