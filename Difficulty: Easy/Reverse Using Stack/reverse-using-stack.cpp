class Solution {
  public:
    string reverse(const string& s) {
        // code here
        stack<char>st;
        for(int i = 0; i < s.size(); i++){
            st.push(s[i]);}
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }    
        return ans;
              
    }
};