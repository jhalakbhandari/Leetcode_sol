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
        vector<vector<int>> zigZagLevelOrder(Node* root){
            vector<vector<int>> result;
            if(root==NULL){
                return result;
            }
            queue<Node*> nodesQueue;
            nodesQueue.push(root);
            bool leftToRight = true;
            while(!nodesQueue.empty()){
                int size=nodesQueue.size();
                vector<int> row(size);
                for(int i=0;i<size;i++){
                    Node* node=nodesQueue.front();
                    nodesQueue.pop();
                    int index=(leftToRight)?i:(size-1-i);
                    row[index]=node->data;
                    if(node->left){
                        nodesQueue.push(node->left);

                    }
                     if(node->right){
                        nodesQueue.push(node->right);

                    }
                }
                leftToRight=!leftToRight;
                result.push_back(row);


            }
            return result;
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
    vector<vector<int>> result = solution.zigZagLevelOrder(root);

    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;};