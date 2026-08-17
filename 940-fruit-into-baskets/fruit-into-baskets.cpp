class Solution {
public:
    int totalFruit(vector<int>& arr) {
        unordered_map<int, int> freq;

        int n = arr.size();
        int j = 0;
        int maxi = 0;

        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;

            if(freq.size() > 2) {
                freq[arr[j]]--;

                if(freq[arr[j]] == 0) {
                    freq.erase(arr[j]);
                }

                j++;
            }

            maxi = max(maxi, i - j + 1);
        }

        return maxi;
    }
};