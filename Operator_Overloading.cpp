#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }
        // Parameterised constructor
        Complex(int r, int i){
            real = r;
            img = i;
        }
        // Copy Constructor - it exist by default

        void setReal(const int r ){
            real = r;
        }
        void setImg(const int i){
            img = i;
        }
        int getReal()const{
            return real; 
        }
        int getImg()const{
            return img;
        }
        void print(){
            if(img>0){
                cout<<real<<" + "<<img<<"i"<<endl;
            }else{
                cout<<real<<" - "<<-img<<"i"<<endl;
            }
        }
        void operator+(const Complex &X){
            real += X.real;
            img += X.img;
        }
        void add(const Complex &x){
            real += x.real;
            img += x.img;
        }
               

};

void operator>>(istream& is, Complex &c){
    int r1, i1;
    cin>>r1>>i1;
    c.setReal(r1);
    c.setImg(i1);
}

void operator<<(ostream & os, Complex &c){
    c.print();
}

int main(){
    Complex c1(5,3);
    Complex c2;
    c2.setImg(4);
    c2.setReal(1);

    c1.print();
    c2.print();

    // c1.add(c2); 
    c1 + c2;

    c1.print();
    c2.print();

    cout<<endl;
    Complex d;
    cin>>d;
    cout<<d;

}