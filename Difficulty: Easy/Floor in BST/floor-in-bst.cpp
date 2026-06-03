/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    int findMaxFork(Node* root, int k) {
        // code here
        Node * currnode = root;
        int ans = -1;
        Node* nn = new Node(k);
        while(currnode!= NULL){
            if(currnode->data == k)
                return currnode->data;
            if(currnode->data < nn->data){
                ans = currnode->data;
               currnode = currnode->right;
            }
            else{
                currnode =currnode->left;
                // currnode1 =currnode1->left;
            }
        }
        return ans;
    }
};