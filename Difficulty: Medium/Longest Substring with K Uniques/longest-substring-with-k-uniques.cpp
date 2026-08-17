class Solution {
public:
    int longestKSubstr(string &arr, int k) {
        unordered_map<int, int> freq;

        int n = arr.size();
        int j = 0;
        int maxi = -1;

        for(int i = 0; i < n; i++) {
            freq[arr[i]-'a']++;

            if(freq.size() > k) {
                freq[arr[j]-'a']--;

                if(freq[arr[j]-'a'] == 0) {
                    freq.erase(arr[j]-'a');
                }

                j++;
            }

            if(freq.size() == k) {
                maxi = max(maxi, i - j + 1);
            }}
        return maxi;
    }
};