class Solution {
  public:
  void ps(vector<int>& arr,vector<int>& ans,vector<vector<int>>& result,int i){
        if(i == arr.size()){
            result.push_back(ans);
            return ;
        }
        
        ans.push_back(arr[i]);
        ps(arr,ans,result,i+1);
        ans.pop_back();
        ps(arr,ans,result,i+1);
        
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        int i=0;vector<vector<int>> result;
        vector<int> ans;
        ps(arr,ans,result,i);
        return result;
    }
};