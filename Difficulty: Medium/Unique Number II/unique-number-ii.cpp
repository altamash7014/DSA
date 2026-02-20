class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        unordered_map<int,int>mp;
        for(int val:arr){
            mp[val]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};