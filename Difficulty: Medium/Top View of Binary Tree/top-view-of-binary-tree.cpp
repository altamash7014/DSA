class Solution {
  public:
    vector<int> topView(Node *root) {

        if(root == NULL) return {};

        map<int,int> mp;
        queue<pair<Node*,int>> q;   // Node + horizontal distance

        q.push({root,0});

        while(!q.empty()){

            Node* curr = q.front().first;
            int hd = q.front().second;
            q.pop();

            if(mp.find(hd) == mp.end())
                mp[hd] = curr->data;

            if(curr->left)
                q.push({curr->left, hd-1});

            if(curr->right)
                q.push({curr->right, hd+1});
        }

        vector<int> ans;

        for(auto x : mp)
            ans.push_back(x.second);

        return ans;
    }
};
