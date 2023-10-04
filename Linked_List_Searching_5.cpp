#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        // constructor
        node(int d){
            data = d;
            next = NULL;
        }
};

// Linked class 
/*
class LinkedList{
    node * head;
    node *tail;
    public:
        LinkedList(){

        }
        void insert(int d){

        }
        .....

}
*/

// Functions

void build(){

}
// passing a pointer by reference
void insertAtHead(node* &head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }

    node* n = new node(d);
    n -> next = head;
    head = n;

}


void print(node * head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
int length(node* head){
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
    
}
void insertAtTail(node* head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}

void insertInMiddle(node* &head, int data, int p){ 
    if(head == NULL or p == 0){
        insertAtHead(head, data);
        return;
    }
    else if(p > length(head)){
        insertAtTail(head, data);
    }
    else{
        // take p-1 jumps
        int jump = 1;
        node* temp = head;
        while(jump <= p-1){
            temp = temp -> next;
            jump++;
        }
        
        node* n = new node(data);
        n->next = temp->next;
        temp->next = n;


    }

}

void deleteHead(node* &head){
    if(head == NULL){
        return;
    }
    node * temp = head->next;
    delete head;
    head = temp;
}

// search Operation
// Linear Search
bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

// recursively
bool searchRecursive(node* head, int key){
    if(head == NULL){
        return false;
    }
    // recursive case, check at head, remaining linkedlist
    if(head->data == key){
        return true;
    }
    else{
        return searchRecursive(head->next, key);
    }
}


int main(){
    node* head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);
    
    insertInMiddle(head, 4, 3);
    insertAtTail(head, 7);
    print(head);
    deleteHead(head);
    print(head);

    int key;
    cin>>key;
    if(searchRecursive(head,key)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    

}