#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	int row,i,no;
    no = 1;
	for(row=1; row<=n; row = row + 1){
		 
		for(i = 1; i <= row; i = i+1 ){
            
            cout<<no<<"    ";
            no = no + 1;
            
		}
		cout<<endl;
	}
	return 0;
}