/*
Procedural Programming (Functions)
----------------------------------

Object Oriented Programming (OOPs)
----------------------------------
Real World Entities --> Object in program 

*/

#include<bits/stdc++.h>
using namespace std;

// defining a new data type
class Car{
    int price;
    int model_no;
    char name[20];
};

int main(){

    Car a[20]; // store info about max 20 cars 
    // create an object 
    Car c;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(Car)<<endl;
}