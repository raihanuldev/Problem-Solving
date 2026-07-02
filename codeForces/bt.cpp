#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left, * right;
        Node(int key){
            data = key;
            left = NULL;
            right = NULL;
        }
};

void inOrder(Node* node,vector<int>&res){
    if(node==nullptr)
        return;
    // Traverse the left subtree first
    inOrder(node->left, res);
    // Visit the current node
    res.push_back(node->data);
    // Traverse the right subtree last
    inOrder(node->right, res);
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //2,3,4,5,6
    Node* root = new Node(2);
    Node* secnd = new Node(3);
    Node* third = new Node(4);
    Node* forth = new Node(5);
    Node* fifth = new Node(6);
    root->left =secnd;
    root->right = third;
    secnd->left = forth;
    forth->left = fifth;
    
    //Traversal => InOrder Traversal
    vector<int>res;
    inOrder(root,res);
    for(auto node:res){
        cout<<node<<" ";
    }

    return 0;
}