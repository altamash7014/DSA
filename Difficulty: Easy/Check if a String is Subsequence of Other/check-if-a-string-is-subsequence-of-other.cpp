class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        
        int n = s1.length();
        int m = s2.length();
        
        int i = 0; // pointer for s2
        int j = 0; // pointer for s1
        
        while(i < m && j < n) {
            if(s1[j] == s2[i]) {
                j++;
            }
            i++;
        }
        
        return (j == n);
    }
};