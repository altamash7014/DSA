class Solution {
public:
    vector<int> prevSmaller(vector<int>& arr) {
        reverse(arr.begin(),arr.end());
        stack<int> st;
        vector<int> v;
        int n = arr.size();
        v.push_back(-1);
        st.push(arr[n-1]);
        for(int i = n-2;i>=0;i--){
            if(arr[i] > arr[i+1]){
                v.push_back(arr[i+1]);
            }
            else{
                while(!st.empty() && st.top() >= arr[i]){
                    st.pop();
                }
                if(!st.empty()){
                    v.push_back(st.top());
                }
                else{
                    v.push_back(-1);
                }
            }
            st.push(arr[i]);
        }
        return v;
    }
};