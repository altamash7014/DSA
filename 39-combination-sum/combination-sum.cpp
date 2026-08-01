class Solution {
public:

    set<vector<int>> s;

    void helper(vector<int> &arr, int idx, int trgt,
                vector<vector<int>> &ans,
                vector<int> &combin) {

        if(trgt == 0){
            if(s.find(combin) == s.end()){
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }

        if(idx == arr.size() || trgt < 0)
            return;

        // Include once and move to next index
        combin.push_back(arr[idx]);
        helper(arr, idx + 1, trgt - arr[idx], ans, combin);
        combin.pop_back();

        // Include again (multiple times)
        combin.push_back(arr[idx]);
        helper(arr, idx, trgt - arr[idx], ans, combin);
        combin.pop_back();

        // Exclude current element
        helper(arr, idx + 1, trgt, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> combin;

        helper(candidates, 0, target, ans, combin);

        return ans;
    }
};