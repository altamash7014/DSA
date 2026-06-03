/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isBST(Node* root) {
        // code here
        return isBST(root,INT_MIN,INT_MAX);
    }
    bool isBST(Node * root,long mini,long maxi){
        if(root==NULL)return true;
        if(root->data >= maxi ||root->data <= mini ){
            return false;
        }
        return  isBST(root->left,mini,root->data) && isBST(root->right,root->data,maxi);
    }
};