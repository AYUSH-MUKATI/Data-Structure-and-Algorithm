#include<bits/stdc++.h>
using namespace std;
 
// int main(){
//     int N;
//     cin>>N;
//     int m,n;
//     for(int i=1; i<=N; i++){
//         cin>>m>>n;
//         if(m<n){
//             cout<<"Harshit"<<endl;
//         }
//         else{
//             cout<<"Aayush"<<endl;
//         }

//     }
// }


string shopping_game(int m, int n) {
  int ayush_count = 1;
  int harshit_count = 2;
  while (true) {
    if (ayush_count == m) {
      return "Aayush";
    } else if (harshit_count == n) {
      return "Harshit";
    } else {
      ayush_count++;
      harshit_count += 2;
    }
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int m, n;
    cin >> m >> n;
    cout << shopping_game(m, n) << endl;
  }
  return 0;
}
