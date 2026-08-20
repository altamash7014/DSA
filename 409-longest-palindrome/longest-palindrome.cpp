class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>freq(52,0);

        for(char c : s){
            if(c >= 'a')
                freq[c-'a']++;
            else
                freq[c-'A'+26]++;
        }

        int cnt = 0;

        for(int i = 0; i < 52; i++){
            cnt += (freq[i] / 2) * 2;
        }

        if(cnt < s.size()){
            cnt += 1;
        }

        return cnt;
    }
};