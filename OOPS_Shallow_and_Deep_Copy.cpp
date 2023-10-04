/*
1. Constructor 
    - It is responsible for creating an object 
    - Gets called Automatically and only once 
    - define same name as class name 
    - Constructors that have parameters are called Parameterised constructor
    - more than one constructor is constructor overloading 

2. Copy Constructors
    - make a copy of the given object 
    - exists by default
    - when you nedd to define youe own copy constructor ?
    - shallow copy 
    - You have to make your own copy constructor if deep copy is needed
    - if you have a pointer variable that points toward a heap memory then you need deep copy 


3. Copy Assignment Constructor

    - Copy when you do assignment 
    - Car d = c; // copy constructor
    - Car d;
    - d = c; copy assignment operator
    - you can write your own copy assignment operator to make a deep copy 
    

4. Destructor
*/

#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
        float price;
    public:
        int model_no;
        char *name;

        Car(){
            name = NULL;
        }
        Car(float p, int m, char *n){
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

        void setPrice(float p){
            price = p;
        }


        void print(){
            cout<<"Name: "<<name<<endl;
            cout<<"Model: "<<model_no<<endl;
            cout<<"Price: "<<price<<endl;
        }

};

int main(){
    Car c(100, 200, "BMW" ); // Parameterised constructor 
    Car d(c); // copy constructor 

    d.setPrice(400);
    d.name[0] = 'A';

    c.print(); 
    d.print(); 

}