#include<bits/stdc++.h>
using namespace std;

class Node{ // User Type Data Type
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this->next = NULL;
    }
};

class LinkedList{ // User Defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp -> next;
            } 
            t -> next = temp -> next;
            temp -> next = t;
            size++;
        }
    }

    int getAtidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp -> next;
            }
            return temp -> val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtidx(int idx){
        if(size==0){
            cout<<"Linked List is Empty!";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index !!!";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<idx;i++){
                temp = temp -> next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll; //{ }
    ll.insertAtTail(10); // {10 -> NULL}
    ll.display();
    ll.insertAtTail(20); // {10 -> 20 -> NULL}
    ll.display(); // 10 20
    ll.insertAtTail(30); // {10 -> 20 -> 30 -> NULL}
    ll.insertAtTail(40); // {10 -> 20 -> 30 -> 40 -> NULL}
    ll.display();
    ll.insertAtHead(50); // {50 -> 10 -> 20 -> 30 -> 40 -> NULL}
    ll.display();
    ll.insertAtHead(24); // {24 -> 50 -> 10 -> 20 -> 30 -> 40 -> NULL}
    ll.display();
    ll.insertAtidx(4,80); // {24 -> 50 -> 10 -> 20 -> 30 -> 40 -> NULL}
    ll.display();
    // cout<<ll.getAtidx(-2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtidx(3);
    ll.display();

    cout<<endl;

    // size print
    cout<<"Array Size : "<<ll.size;
}