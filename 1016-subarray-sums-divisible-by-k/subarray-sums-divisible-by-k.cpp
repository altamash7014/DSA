class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {

        unordered_map<int, int> prefixSums;

        int res = 0;
        int currSum = 0;

        // Remainder 0 has already occurred once
        prefixSums[0] = 1;

        for(int i = 0; i < arr.size(); i++) {

            currSum += arr[i];

            int rem = currSum % k;

            // Handle negative remainder
            if(rem < 0)
                rem += k;

            // If same remainder occurred before,
            // the subarray between them is divisible by k
            if(prefixSums.find(rem) != prefixSums.end())
                res += prefixSums[rem];

            // Store this remainder
            prefixSums[rem]++;
        }

        return res;
    }
};