#include<bits/stdc++.h>
using namespace std;

// defining a new data type
class Car{
    private:
        float price;
public:

    
    int model_no;
    char name[20];

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
    Car c;
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

}