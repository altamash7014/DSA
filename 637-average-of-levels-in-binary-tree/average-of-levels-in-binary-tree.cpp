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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {

            int n = q.size();
            vector<int> level;
            double sum =0;
            for(int i = 0; i < n; i++) {

                TreeNode* curr = q.front();
                q.pop();
                sum+=curr->val;
                level.push_back(curr->val);

                // Always add children left -> right
                if(curr->left != NULL)
                    q.push(curr->left);

                if(curr->right != NULL)
                    q.push(curr->right);
            }

            if(leftToRight == false)
                reverse(level.begin(), level.end());

            ans.push_back(double(sum/n));

            leftToRight = !leftToRight;
        }

        return ans;
    }
};