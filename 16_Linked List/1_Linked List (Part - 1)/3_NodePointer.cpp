#include<bits/stdc++.h>
using namespace std;

class Node{ // Linked lIst Node
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this->next = NULL;
    }
};

void display(Node* head){
    // Node* temp = head;
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

int size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){ 
        n++;
        temp = temp->next;
    }
    return n;
}

void revDisplay(Node* head){
    if(head==NULL) return; // Base Case
    revDisplay(head->next); // Call
    cout<<head->val<<" "; // Kaam
}

void displayrec(Node* head){
    if(head==NULL) return; // Base Case
    cout<<head->val<<" "; // Kaam
    displayrec(head->next); // Call
}

void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL) head = head -> next;
    head -> next = t;
}

int main(){ 
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d; 
    d->next = e;

    display(a);
    insertAtEnd(a,80);
    display(a);
    // cout<<endl;
    // revDisplay(a);
    // displayrec(a);
    // cout<<size(a);
    ///////
    // cout<<a->next->next->val; // C ar Value ata print hobe 
    // Joto ami next next kore jabo toto amar Val(value) agiye agiye jabe ok
    ///////

    // Node* temp = a; 
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
}