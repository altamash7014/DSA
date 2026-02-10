class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>ans;
           int maxi = INT_MIN;
           int n = arr.size();
           if (n == 0) return ans;
           for(int i = n-1;i>=0;i--){
               if(arr[i]>=maxi){
                   maxi = arr[i];
                   ans.push_back(maxi);
               }
               
           }reverse(ans.begin(),ans.end());
           return ans;
    }
};