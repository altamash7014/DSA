/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)return NULL;
        int leftht =0;
        int rightht =0;
        leftht = minDepth(root->left);
        rightht = minDepth(root->right);
        if(leftht == 0){return rightht+1;}
        if(rightht == 0){return leftht+1;}
        return min(leftht,rightht)+1;
    }
};