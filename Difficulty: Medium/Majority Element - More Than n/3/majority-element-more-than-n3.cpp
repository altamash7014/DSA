class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        set<int>ans;
        int n = arr.size();
        int m = n/3;
        unordered_map<int,int>count ;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
            if(count[arr[i]]>m){
                ans.insert(arr[i]);
        }}
        // sort(ans.begin(),ans.end());
         return vector<int>(ans.begin(), ans.end());
            
        
        
    }
};