class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        auto low = lower_bound(arr.begin(), arr.end(), target);

        // Find the iterator to the first element greater than target
        auto high = upper_bound(arr.begin(), arr.end(), target);

        // The difference between iterators gives the count
        return high - low;
    }
};
