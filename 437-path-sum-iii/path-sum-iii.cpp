class Solution {
public:
    int cnt;

    void helper(TreeNode* root, long long sum, int target, vector<int>& path) {
        if(root == NULL)
            return;

        sum += root->val;
        path.push_back(root->val);

        // Check every subarray ending at current node
        long long temp = 0;
        for(int i = path.size() - 1; i >= 0; i--) {
            temp += path[i];

            if(temp == target)
                cnt++;
        }

        helper(root->left, sum, target, path);
        helper(root->right, sum, target, path);

        path.pop_back();
    }

    int pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        cnt = 0;

        helper(root, 0, targetSum, path);

        return cnt;
    }
};