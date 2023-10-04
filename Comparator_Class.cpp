#include<bits/stdc++.h>
using namespace std;

template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){

    while(start != end){
        if(cmp(*start, key)){
            return start;
        }
        start++;
    }
    return end;

}


class Book{
    public:
        string name;
        int price;


    Book(){

    }
    Book(string name, int price){
        this->name = name;
        this->price = price;

    }
}; 

class BookCompare{

    public:
        bool operator()(Book A, Book B){
            if(A.name == B.name){
                return true;
            }else{
                return false;
            }
        }

        

};
 
int main(){
    Book b1("C++", 100);
    Book b2("Python", 120);
    Book b3("java", 130);
    
    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book bookTofind("C++",110);

    BookCompare cmp;
    // list<Book>::iterator it = search(l.begin(, l.end(), bookTofind, cmp));
    auto it = search(l.begin(), l.end(), bookTofind, cmp);

    if(it != l.end()){
        cout<<"Book Found in the library";
    }


    // if(cmp(b1, bookTofind)){
    //     cout<<"True"<<endl;
    // }else{
    //     cout<<"False"<<endl;
    // }
}