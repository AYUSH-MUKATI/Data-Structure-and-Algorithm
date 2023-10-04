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
4. Destructor
*/

#include<bits/stdc++.h>
using namespace std;

// defining a new data type
class Car{
    private:
        float price;
public:

    
    int model_no;
    char name[20];

    Car(){
        cout<<"Inside Car Constructor"<<endl;
    }
    // Parameterised constructor
    Car(float p, int m, char *n){
        price = p;
        model_no = m;
        strcpy(name, n);
    }

    void Print(){
        cout<<"Name: "<<name<<endl;
        cout<<"Model No: "<<model_no<<endl;
        cout<<"Price: "<<price<<endl;
    }

    float get_discounted_price(float x){
        return price * (1.0-x);
    }
    int apply_discount(float x){
        price = price * (1.0 - x);
        return price;
    }

    void set_price(float p){
        float msp = 111;
        if(p > 0){
            price  = p;
        }
        else{price = msp;}
    }

    float get_price(){
        return price;
    }
};

int main(){

    
    // create an object 
    Car c; // make a call to the constructor function present inside the class 
    Car d(222, 333, "Audi");

    Car e(d); // Copy constructor 
    // another way of calling copy constructor
    Car f = e;

    e.Print();
    // c.price = 100;
    c.model_no = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';
    c.set_price(100);
    // cout<<c.name<<" Model no "<<c.model_no<<" Price "<<c.price<<endl;

    // cout<<"Enter the discount you want to give "<<endl;
    // float discount;
    // cin>>discount;
    
    c.Print();
    d.Print();

}