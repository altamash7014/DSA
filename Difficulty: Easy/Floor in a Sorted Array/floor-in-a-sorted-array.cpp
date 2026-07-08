class Solution {
public:
    int findFloor(vector<int>& arr, int x) {

        // Initialize the search range
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {

            // Find the middle index
            int mid = low + (high - low) / 2;
            if (arr[mid] <= x) {
                ans = mid;      
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        // Return the index of the floor element
        return ans;
    }
};