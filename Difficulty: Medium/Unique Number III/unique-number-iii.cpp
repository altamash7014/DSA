// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        unordered_map<int,int>mp;
        for(int val:arr){
            mp[val]++;
        }
        
        int ansi;
        for(auto it:mp){
            if(it.second == 1){
                ansi= it.first;
            }
        }
        return ansi;

    }
};