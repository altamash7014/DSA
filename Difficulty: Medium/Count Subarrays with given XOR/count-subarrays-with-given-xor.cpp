class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int res=0;
        unordered_map<int,int>mp;
        int preXor=0;
        for(int val:arr){
            preXor^=val;
            res = res+mp[preXor^k];
            if(preXor == k)res++;
            mp[preXor]++;
        }
        return res;
        
        
    }
};