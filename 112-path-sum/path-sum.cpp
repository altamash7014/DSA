class Solution {
public:
    bool helper(TreeNode* root, int sum, int target) {
        if(root == NULL)
            return false;

        sum += root->val;

        if(root->left == NULL && root->right == NULL)
            return sum == target;

        return helper(root->left, sum, target) ||
               helper(root->right, sum, target);
    }

    bool hasPathSum(TreeNode* root, int target) {
        return helper(root, 0, target);
    }
};