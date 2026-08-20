class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt[26] = {0};
        for(char ch:ransomNote){
            cnt[ch-'a']++;
        }
        for(char ch:magazine){
            cnt[ch-'a']--;
        }
        for(int i=0;i<26;i++){
            if(cnt[i]>0){
                return false;
            }
        }return true;
    }
};