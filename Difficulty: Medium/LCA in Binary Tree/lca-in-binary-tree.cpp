/* Structure of binary tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    Node* lca(Node* root, int p, int q) {
        //  code here
        if(root==NULL)return NULL;
        if(root->data == p || root->data == q){
            return root;
        }
        Node * leftLCA = lca(root->left,p,q);
        Node * rightLCA = lca(root->right,p,q);
        // if(leftLCA != NULL && rightLCA != NULL){
        if(leftLCA != NULL && rightLCA != NULL){
            return root;
        }
        else if(leftLCA != NULL && rightLCA == NULL){
            return leftLCA;}
        else return rightLCA;
        
    }
};