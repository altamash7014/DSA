
class Solution {
  public:
  int mod = (1e9)+7;
  int findleft(vector<int>&arr , int  n ,vector<int>&left){
      stack<int>st;
    //   st.push(-1);
      for(int i = 0;i<n;i++){
          int curr = arr[i];
          while(!st.empty()&&arr[st.top()]> curr){
              st.pop();
          }
          if(st.empty())    left[i] = i+1;
          else left[i] = i-st.top();
          st.push(i);
      }
  }
  int findright(vector<int>&arr , int n , vector<int>&right ){
      stack<int>s;
      
          for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] >= arr[i])
            s.pop();
        right[i] = s.empty() ? n - i : s.top() - i;
        s.push(i);
    }
  }
    int sumSubMins(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        vector<int>left(n );
        vector<int>right(n );
        findleft(arr ,  n , left);
        findright( arr , n  ,right);
        
        long long res = 0;
        for(int i = 0;i<n;i++){
            res += (arr[i] *left[i] *right[i])%mod;
            
        }
        return res;
    }
};