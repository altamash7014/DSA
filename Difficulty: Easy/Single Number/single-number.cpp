// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int ans=0;
        for(int  i=0;i<arr.size();i++){
            ans = arr[i]^ans;

        }return ans;
    }
};