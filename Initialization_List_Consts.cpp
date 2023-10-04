Const Data Members = Once Init, they cant changed their  value
Const Parameters
Const Functions 
Initialisation List = Init Constant as well as other data members 



#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
        float price;
    public:
        int model_no;
        char *name;
        const int msp;


        Car():msp(99){
            name = NULL;
            
        }
        Car(float p, int m, char *n, int minprice=99):price(p),msp(minprice){
            price = p;
            model_no = m;
            name = new char[strlen(n) + 1];
            strcpy(name,n);
        }

        Car(Car &X){
            price = X.price;
            model_no = X.model_no;
            name = new char[strlen(X.name)+1];
            strcpy(name, X.name);
        }
        void operator=(Car &X){
            price = X.price;
            model_no = X.model_no;
            name = new char[strlen(X.name)+1];
            strcpy(name, X.name);
        }

        void setPrice(float p){
            price = p;
        }


        void print(){
            cout<<"Name: "<<name<<endl;
            cout<<"Model: "<<model_no<<endl;
            cout<<"Price: "<<price<<endl;
        }
        float get_price() const{
            return price;
        }

        ~Car(){
            cout<<"Inside the Destructor of the class"<<endl;
        }

};

int main(){
    Car c(100, 200, "BMW" ); // Parameterised constructor 
    Car d; // copy constructor 
    d = c; // copy assignment operator


    d.setPrice(400);
    d.name[0] = 'A';

    c.print(); 
    d.print(); 

}