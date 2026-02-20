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

int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left), levels(root->right));
}

void nthLevel(Node* root, int curr, int level){
    if(root==NULL) return; // base case
    if(curr==level){
        cout<<root->val<<" "; // root
        return;
    }
    nthLevel(root->left, curr+1, level); // left
    nthLevel(root->right, curr+1, level); // right
}

void nthLevelRev(Node* root, int curr, int level){
    if(root==NULL) return; // base case
    if(curr==level){
        cout<<root->val<<" "; // root
        return;
    }
    nthLevelRev(root->left, curr+1, level); // left
    nthLevelRev(root->right, curr+1, level); // right
}

void levelOrder(Node* root){
    int n = levels(root);
    for(int i=1; i<=n; i++){
        nthLevel (root, 1, i);
        cout<<endl;
    }
}

void levelOrderQueue(Node* root){ // BFS 
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<endl;
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
    
    // cout<<endl;
    // nthLevel(a, 1,2);
    // nthLevel(a, 1,3);
    // nthLevel(a, 1,4);
    levelOrderQueue(a);
}