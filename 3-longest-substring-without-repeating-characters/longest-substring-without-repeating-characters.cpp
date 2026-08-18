class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hs;
        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {
            while (hs.count(s[right])) {
                hs.erase(s[left]);
                left++;
            }

            hs.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};