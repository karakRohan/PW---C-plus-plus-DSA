#include<bits/stdc++.h>
using namespace std;

class Node{ // This is a TreeNode
public:
    int val; 
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[], int n){
    queue<Node*> q;

    Node* root = new Node(arr[0]);
    q.push(root);

    int i = 1;   // left child index
    int j = 2;   // right child index

    while(q.size() > 0 && i < n){
        Node* temp = q.front();
        q.pop();

        Node* l; // left child
        Node* r; // right child

        if(arr[i] != INT_MIN) 
            l = new Node(arr[i]);
        else 
            l = NULL;

        // j < n to avoid out of bound error
        if(j < n && arr[j] != INT_MIN) 
            r = new Node(arr[j]);
        else 
            r = NULL;

        temp->left = l;
        temp->right = r;

        if(l != NULL) q.push(l);
        if(r != NULL) q.push(r);

        i += 2;  // move to next pair
        j += 2;
    }
    return root; 
}

// Left Boundary (excluding leaf nodes)
void leftBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    cout << root->val << " ";

    if(root->left != NULL)
        leftBoundary(root->left);
    else
        leftBoundary(root->right);
}

// Bottom Boundary (leaf nodes only)
void BottomBoundary(Node* root){
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL){
        cout << root->val << " ";
        return;
    }

    BottomBoundary(root->left);
    BottomBoundary(root->right);
}

// Right Boundary (excluding leaf nodes, printed in reverse)
void rightBoundary(Node* root){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    if(root->right != NULL)
        rightBoundary(root->right);
    else
        rightBoundary(root->left);

    cout << root->val << " ";
}

// Boundary Traversal
void boundary(Node* root){
    if(root == NULL) return;

    cout << root->val << " ";          // print root
    leftBoundary(root->left);          // left boundary
    BottomBoundary(root);              // leaf nodes
    rightBoundary(root->right);        // right boundary
}

int main(){
    // Construct tree using level order array
    int arr[] = {
        1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,11,INT_MIN,12,13,INT_MIN,14,15,16,INT_MIN,17,18,INT_MIN,19,20,21,INT_MIN,22,23,24,INT_MIN,25,26,27,28
    };

    int n = sizeof(arr)/sizeof(arr[0]);

    Node* root = construct(arr, n);

    // Boundary Traversal
    boundary(root);
}