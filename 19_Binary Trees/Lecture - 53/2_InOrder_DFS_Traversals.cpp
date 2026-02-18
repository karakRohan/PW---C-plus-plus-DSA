#include<bits/stdc++.h>
using namespace std;
class Node{ // This is a TreeNode 
public:
    int val; 
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL) return; // base case: if the node is null, return
    inorder(root->left); // (left) call - 1.. the function recursively on the left subtree
    cout<<root->val<<" "; //(Root) InOrder //work: print the value of the current node
    inorder(root->right); //(Right) call - 2.. the function recursively on the right subtree
    // cout<<root->val<<" "; // PostOrder  // work
}

int main(){
    Node* a = new Node(1); // root node
    Node* b = new Node(2);
    Node* c = new Node(3);      
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    inorder(a);
    cout<<endl;
}