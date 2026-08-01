class Solution {
  public:
    void sortStack(stack<int> &st) {

        multiset<int> s;

        // Move stack elements into set
        while(!st.empty()){
            s.insert(st.top());
            st.pop();
        }

        // Insert back into stack
        for(auto x : s){
            st.push(x);
        }
    }
};