#include<bits/stdc++.h>
using namespace std;

class Node{ // Linked lIst Node
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
    }
};
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming all
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // print karani hai d ki value
    // *(*(*(a.next).next).next).val
    // cout<<(((a.next)->next)->next)->val;

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    }
}