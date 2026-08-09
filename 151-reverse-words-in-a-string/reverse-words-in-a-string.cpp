class Solution {
public:
    string reverseWords(string s) {
        string ans = ""; // Localized to prevent state carryover between test cases
        int n = s.length();
        
        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end()); 
        
        for (int i = 0; i < n; i++) {
            // Skip extra spaces between words
            if (s[i] == ' ') continue; 
            
            string word = ""; // Start with an empty string, NOT " "
            
            // Extract the word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            
            // Step 2: Flip the extracted word back to its original order
            reverse(word.begin(), word.end()); 
            
            // Step 3: Append to answer with a space separator
            if (ans.length() > 0) {
                ans += " "; 
            }
            ans += word;
        }
        
        return ans;
    }
};