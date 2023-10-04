/*
Iterators 
    Iterators as an entity that helps us to access the data within a container with certain restrictions.

    --Input Iterators :
        A entity through which you can read data from  container  and move ahead.
        For Example: A Keyboard
    --Output Iterators :
        A entity through which you can write into the container and move ahead.

    --Forward Iterators: 
        Iterators with functionalities of input and output iterator in single direction.
        For Example: Singly Linked List

    --Bidirectional Iterators:
        Forward Iterator that can move in both directions.

    --Random Access Iterators 
        Random Access Iterator is an iterator that can read/write in both directions and also can take jumps 

*/

#include<bits/stdc++.h>
using namespace std;

// linear search
template<typename T>

int search(T a[], int n, T key){

    for(int i = 0; i< n; i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){

    while(start != end){
        if(*start == key){
            return start;
        }
        start++;
    }
    return end;

}

int main(){
    /*
    int a[] = {1, 2, 3, 4, 10, 5, 6 };
    int n = sizeof(a)/sizeof(int);
    int key = 10;
    cout<<search(a, n, key);
    */
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(5);
    l.push_back(3);

    auto it = search(l.begin(), l.end(), 5);
    cout<<(*it)<<endl;

    
 

    return 0;
}