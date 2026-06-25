class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n,-1);
        //traverse ulta 
        for(int i=n-1;i>=0;i--){
            
            //chote uda do
            while(!st.empty() and st.top() <= arr[i]){
                st.pop();
            }
            //stack !empty -> top=>ans
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(arr[i]);
            
        }
        return ans;
    }
        

};