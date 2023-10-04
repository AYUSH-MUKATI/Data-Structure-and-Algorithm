#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n,i;
	int Largest_num = INT_MIN;

	for(i=1; i<=3; i = i + 1){
		cin>>n;
		if(Largest_num < n){
			Largest_num = n;
		}

	}
	cout<<Largest_num;


	return 0;
}