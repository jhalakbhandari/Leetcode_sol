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
        vector<int> topViewOrder(Node* root){
             vector<int> ans;
             if(root==NULL) return ans;
             map<int,int> map;
             queue<pair<Node*,int>> q;
             q.push({root,0});
             while(!q.empty()){
                auto it=q.front();
                q.pop();
                Node* node=it.first;
                int line=it.second;
                if(map.find(line)==map.end()) map[line]=node->data;
                if(node->left!=NULL){
                    q.push({node->left,line-1});
                }
                if(node->right!=NULL){
                    q.push({node->right,line+1});
                }
             }
             for(auto it:map){
                ans.push_back(it.second);
             }
             return ans;
        }
};

int main(){
    struct Node* root= new Node(1);
    root -> left = new Node(2);
    root-> right = new Node(3);
    // root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    Solution solution; // Create an object of the Solution class
    vector<int> result = solution.topViewOrder(root);

    // for (const auto& level : result) {
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    // }
    return 0;};