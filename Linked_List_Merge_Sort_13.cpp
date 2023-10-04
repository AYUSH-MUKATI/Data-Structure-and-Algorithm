// recursively reverse a linked list 
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



node* take_input(){
    int d;
    cin>>d;

    node* head = NULL;

    while(d != -1){
        insertAtHead(head, d)    ; 
        cin>>d;
    }
    return head; 
}


ostream& operator<<(ostream &os, node* head){
    print(head);
    return os; 
}

istream& operator>>(istream &is, node* &head){
    head = take_input(); 
    return is;
}

void Reverse(node* &head){
    node* c = head;
    node* prev = NULL;
    node* N;
    while(c != NULL){
        // save the next node
        N = c->next;
        // make the current node to prev
        c->next = prev;

        // update prev and the current take them one step forward 
        prev = c;
        c = N;
    }
    head = prev;
}

node* recReverse(node* &head) {
    // smallest linked list 
    if(head->next == NULL or head==NULL){
        return head;
    }
    // rec case
    node* shead = recReverse(head->next);
    
    node* temp = head->next;
    temp->next = head;  //also written as head->next->next = head so that we dont have to take temp 

    head->next = NULL;
    
    return shead;
}

node* midPoint(node* head){
    if(head == NULL or head->next == NULL){
        return head;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL and fast->next != NULL){ 
        fast = fast->next->next;
        slow = slow->next;

    }
    return slow;
}

node* merge(node* a, node * b){
    // base case 
    if(a == NULL){
        return b;
    }
    if(b == NULL){
        return a;
    }
    // take a temp head pointer 
    node* c;
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next, b);
    }
    else{
        c = b;
        c->next = merge(a, b->next); 
    }
    return c;
}

node* mergeSort(node* head){
    // base case 
    if(head == NULL or head->next == NULL){
        return head;
    }
    // rec case 
    // 1. Break
    node* mid = midPoint(head);
    node* a = head;
    node*b = mid->next;
    mid->next = NULL;

    // 2. rec sort the two parts
    a = mergeSort(a);
    b = mergeSort(b);

    // merge
    node* c = merge(a, b);
    return c;
}

int main(){
   
    node* head;
    

    cin>>head; 
    cout<<head; 

    head = mergeSort(head);
    cout<<head<<endl;

    
    
}