//maintaining a flag
// implemented using queue
#include "bits/stdc++.h"
#include<stack>
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
class Solution{
    public:
    vector<int> rightSideView(Node* root){
        vector<int> res;
        recursion(root, 0,res);
        return res;
    }
    private:
        void recursion(Node* root,int level, vector<int> &res){
             if(root==NULL) return;
             if(res.size()==level) res.push_back(root->data);
             recursion(root->right,level+1,res);
             recursion(root->left,level+1,res);
        }
};

int main(){
    struct Node* root= new Node(1);
    root -> left = new Node(2);
    root-> right = new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    Solution solution; // Create an object of the Solution class
    vector<int> result = solution.rightSideView(root);
    // cout<<rightSideView(root)<<endl;
    // for (const auto& level : result) {
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    // }
    return 0;};