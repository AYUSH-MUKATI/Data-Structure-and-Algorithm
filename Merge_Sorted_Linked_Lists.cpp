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
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

ostream& operator<<(ostream &os, node* head){
    print(head);
    return os; 
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



// node* merge(node* a, node * b){
//     // base case 
//     if(a == NULL){
//         return b;
//     }
//     if(b == NULL){
//         return a;
//     }
//     // take a temp head pointer 
//     node* c;
//     if(a->data < b->data){
//         c = a;
//         c->next = merge(a->next, b);
//     }
//     else{
//         c = b;
//         c->next = merge(a, b->next); 
//     }
//     return c;
// }

void merge(node*& a, node*& b) {
    node dummy(0);
    node* tail = &dummy;

    while (a != NULL && b != NULL) {
        if (a->data < b->data) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }

    if (a != NULL) {
        tail->next = a;
    } else {
        tail->next = b;
    }

    a = dummy.next;
    b = NULL; // Set b to NULL, as it has been merged into a.
}

int main(){
    
    
    node* head = NULL;
    node* head2 = NULL;
    int t;
    cin>>t;

    for(int i= 0; i<t; i++){
    
        int n,m;
        cin>>n;
        
        for(int i = 0; i<n; i++){
            int d;
            cin>>d;

            insertAtHead(head, d);
        }
        cin>>m;
        for(int i = 0; i<m; i++){
            int d;
            cin>>d;
            insertAtHead(head2,d);
        }
        Reverse(head);
        Reverse(head2);
        // node* newHead = merge(head, head2);
        merge(head, head2);
        cout<<head<<endl;
    }

}