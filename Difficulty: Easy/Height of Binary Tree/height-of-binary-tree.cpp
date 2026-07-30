/* Structrue of Binary Tree Node
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
    int height(Node* root) {
        // code here
        if(root == NULL){
            return -1;
        }
        int leftht = height(root->left);
        int rightht = height(root->right);
        int maxi = max(leftht,rightht);
        return maxi+1;
    }
};