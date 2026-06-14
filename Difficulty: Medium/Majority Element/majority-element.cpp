class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
         unordered_map<int,int>mp;
         for(int i=0;i<arr.size();i++)
             mp[arr[i]]++;
          for (auto i : mp)
          if(i.second>arr.size()/2)
          return i.first;
          return -1;
    }
};