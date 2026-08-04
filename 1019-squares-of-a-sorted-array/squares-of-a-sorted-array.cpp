class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i = 0;i<n;i++){
            int sq = arr[i]*arr[i];
            ans.push_back(sq);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};