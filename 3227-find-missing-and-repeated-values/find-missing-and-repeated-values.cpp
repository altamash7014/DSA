class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {
        int sum1 = 0;
        int summ = 0;
        int n = arr.size();
        unordered_set<int> st;

        // sum of actual array + unique elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum1 += arr[i][j];
                st.insert(arr[i][j]);
            }
        }

        int sum = 0;
        // sum of unique values
        for (int x : st) {
            sum += x;
        }

        int r = sum1 - sum;

        // expected sum of 1 to n*n
        summ = (n * n * (n * n + 1)) / 2;

        int m = summ - sum;

        vector<int> ans;
        ans.push_back(r);
        ans.push_back(m);

        return ans;
    }
};