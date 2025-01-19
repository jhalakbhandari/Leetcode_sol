#include "bits/stdc++.h"

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//preorder traversal
// vector<int> preorderTraversal(Node* root){
//     vector<int> preorder;
//     if(root==NULL)return preorder;
//     stack<Node*> st;
//     st.push(root);
//     while(!st.empty()){
//         root=st.top();
//         st.pop();
//         preorder.push_back(root->data);
//         if(root->right!=NULL){
//             st.push(root->right);
//         }
//         if(root->left!=NULL){
//             st.push(root->left);
//         }
//     }
//     return preorder;
// }

//inorder traversal
//  vector<int> preorderTraversal(Node* root){
//     vector<int> preorder;
//     // if(root==NULL)return preorder;
//     Node* node=root;
//     stack<Node*> st;
//     while(true){
//         if(node!=NULL){
//             st.push(node);
//             node=node->left;
//         }else{
//             if(st.empty()==true) break;
//             node=st.top();
//             st.pop();
//             preorder.push_back(node->data);
//             node=node->right;
//         }
//     }
//     return preorder;
// }

//postorder

// vector<int> preorderTraversal(Node* root){
//     vector<int> preorder;
//     if(root==NULL)return preorder;
//     // Node* node=root;
//     stack<Node*> st1,st2;
//     st1.push(root);
   
//         while(!st1.empty()){
//             root=st1.top();
//             st1.pop();
//             st2.push(root);
//             if(root->left!=NULL){
//                 st1.push(root->left);
//             }
//             if(root->right!=NULL){
//                 st1.push(root->right);
//             }
//         }
       
    
    
//      while(!st2.empty()){
//             preorder.push_back(st2.top()->data);
//             st2.pop();
//         }
//         // return preorder;
//     return preorder;

// }


int main(){
    struct Node* root= new Node(1);
    root -> left = new Node(2);
    root-> right = new Node(3);
    vector<int> result = preorderTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;}