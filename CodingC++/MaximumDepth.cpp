#include<iostream>
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
int maximumheight(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=maximumheight(root->left);
    int rightHeight=maximumheight(root->right);
    return 1+max(leftHeight,rightHeight);
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
    cout<<maximumheight(root)<<endl;
    return 0;
}