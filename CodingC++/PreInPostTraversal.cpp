#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
vector<int> preInPostTraversal(Node* root){
    stack<pair<Node*,int>> st;
    st.push({root,1});
    vector<int> pre,in,post;
    if(root==NULL) return {};
    while(!st.empty()){
        auto it=st.top();
        st.pop();
        // this is part of pre
        // increement 1 to 2
        // push the left side of the tree
        if(it.second==1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }
        // this is part of in
        // increement 1 to 2
        // push the left side of the tree
        else if(it.second==2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
     vector<int> result;
    result.insert(result.end(), pre.begin(), pre.end());
    result.insert(result.end(), in.begin(), in.end());
    result.insert(result.end(), post.begin(), post.end());

    return result;
}

int main()
{
       struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> result = preInPostTraversal(root);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}