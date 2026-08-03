/* Tree Node Structure
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
    int sumBT(Node* root) {
        // code here
        if(root == NULL)return 0;
        int leftsum = sumBT(root->left);
        int rightsum = sumBT(root->right);
        int totalSum = leftsum +rightsum + root->data;
        return totalSum;
    }
};