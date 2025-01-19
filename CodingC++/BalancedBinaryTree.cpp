#include<iostream>
#include <algorithm> // For std::max

using namespace std;
struct Node{
    struct Node* left;
    struct Node* right;
    int data;
    Node(int val){
        left=NULL;
        right=NULL;
        data=val;
    }
};
int checkHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=checkHeight(root->left);
    if(leftHeight==-1){
        return -1;
    }
    int rightHeight=checkHeight(root->right);
    if(rightHeight==-1){
        return -1;
    }
    if(abs(rightHeight-leftHeight)>1) return -1;
  
    return max(leftHeight,rightHeight)+1;
}
bool isBalanced(Node* root) {
    return checkHeight(root) != -1;
}

int main()
{
    struct Node* root= new Node(1);
    root -> left = new Node(2);
    root-> right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    // root->left->left->left= new Node(7);
    // root->left->left->right= new Node(7);

    cout<<isBalanced(root)<<endl;
    return 0;
}