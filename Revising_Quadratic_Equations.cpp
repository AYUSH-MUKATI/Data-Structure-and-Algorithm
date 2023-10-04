#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a,b,c,x,y;
	cin>>a;
	cin>>b;
	cin>>c;
	int D;
	D = b*b - 4*a*c;
	int d = sqrt(D);
	if(D>0){
		cout<<"Real and Distinct"<<endl;
		x = (-b + d)/2*a ;
		y = (-b - d)/2*a ;
		if(x>y){
			cout<<y<<" "<<x;
		}
		else{
			cout<<x<<" "<<y;
		}
	}
	else if(D==0){
		cout<<"Real and Equal"<<endl;
		x = (-b + d)/2*a;
		y = (-b - d)/2*a ;
		if(x>y){
			cout<<y<<" "<<x;
		}
		else{
			cout<<x<<" "<<y;
		}	
	}
	else{
		cout<<"Imaginary"<<endl;
	}

	return 0;
}