#include<bits/stdc++.h>
using namespace std;

// Let us define a Vector class (User Defined Vector)
class Vector{
    // Data members and some functions 
    int *arr;
    int cs;
    int maxSize;
public:
    Vector(int defaultSize= 4){
        maxSize = defaultSize;
        cs = 0;
        arr = new int[maxSize];
    }

    void operator()(){
        cout<<"() got overloaded "<<endl;
    }

    void push_back(int data){
        if(cs == maxSize){
            // Doubling operation
            int *oldArr = arr;
            arr = new int[2*maxSize];
            maxSize *= 2;
            
            for(int i = 0; i<cs; i++){
                arr[i] = oldArr[i];
            }
            // delete the old arr
            delete []oldArr;
        }
        arr[cs] = data;
        cs++;
    }
    int getSize(){
        return cs;
    }
    int getMaxSize(){
        return maxSize;
    }
    bool empty(){
        return cs == 0;
    }
    void pop_back(){
        if(!empty()){
            cs--;
        }
    }

    void print(){
        for(int i = 0; i<cs; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // Box will return by ref
    int& operator[](int i){
        return arr[i];
    }
    int at(int i){
        return arr[i];
    }
};
 
void operator<<(ostream &os, Vector &v){
    cout<<"In this operator"<<endl;
    v.print();
    return ;
}

int main(){
    Vector v;
    v();
    for (int i = 0; i <= 3; i++)
    {
        v.push_back(i*i);
    }
    cout<<v.getMaxSize()<<endl;
    v.push_back(18);
    cout<<v.getMaxSize()<<endl;
    cout<<v[1]<<endl;

    v.print();
    cout<<endl;
    for (int i = 0; i < v.getSize(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v;

    v[2] = 8;
    v[2] += 6;
    cout<<v[2];
    
    
}