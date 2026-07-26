class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0){
            return false;
        }
        stack<char>st;
        for(auto it:s){
            if(it == '(' || it == '{' || it == '[' ){
                st.push(it);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                if((st.top() == '(' && it == ')')|| 
                (st.top() == '['  && it == ']')|| 
                (st.top() == '{'  && it == '}'))st.pop(); 
                else {
                    return false;
                }
                
            }
        }
        return st.empty();
        
        
    }
};