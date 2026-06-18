class Solution {
  public:
    int findMinInsertions(string &s) {
        // code here
        // find LCS and subtract it from string length , that's it.
        string s1 = s;
reverse(s.begin(), s.end());
string s2 = s;
int n = s1.length();
int m = s2.length();
vector<vector<int>> dp(n + 1, vector<int>(m + 1));
for (int i = 0; i<dp.size(); i++) {
for (int j = 0; j<dp[0].size(); j++) {
if (i == 0 || j == 0) {
dp[i][j] = 0;
}
}
}
for (int i = 1; i<dp.size(); i++) {
for (int j = 1; j<dp[0].size(); j++) {
if (s1[i - 1] == s2[j - 1]) {
dp[i][j] = 1 + dp[i - 1][j - 1];
}
else {
dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
}
}
}
return s.length() - dp[n][m];
    }
};