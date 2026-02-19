class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int>st;vector<int> ans;
        for(int val:arr){
            st.insert(val);
        }
        for(int i=low;i<=high;i++){
            
        
            if(st.find(i) == st.end()){
                ans.push_back(i);
        }}return ans;
    }
};