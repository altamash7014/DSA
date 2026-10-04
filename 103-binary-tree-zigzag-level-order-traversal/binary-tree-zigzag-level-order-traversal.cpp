class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL)
            return {};

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while(!q.empty()) {

            int n = q.size();
            vector<int> level;

            for(int i = 0; i < n; i++) {

                TreeNode* curr = q.front();
                q.pop();

                level.push_back(curr->val);

                // Always add children left -> right
                if(curr->left != NULL)
                    q.push(curr->left);

                if(curr->right != NULL)
                    q.push(curr->right);
            }

            if(leftToRight == false)
                reverse(level.begin(), level.end());

            ans.push_back(level);

            leftToRight = !leftToRight;
        }

        return ans;
    }
};