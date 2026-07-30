class Solution {
  public:
    int countNodes(Node* root) {
        // code here
        if(root == NULL){
            return 0;
        }
        int leftCnt = countNodes(root->left);
        int rightCnt = countNodes(root->right);
        return leftCnt+rightCnt+1;
    }
};