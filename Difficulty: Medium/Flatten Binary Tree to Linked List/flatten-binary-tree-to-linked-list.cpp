/* Binary Tree Node Structure
class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int key) {
        this->key = key;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  Node * nextright = NULL;
    void flatten(Node* root) {
        // code here
        if(root==NULL){
            return ;
        }
        flatten(root->right);
        flatten(root->left);
        
        root->left=NULL;
        root->right=nextright;
        nextright = root;
    }
};