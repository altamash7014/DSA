class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0;
        int high = n - 1;

        while (left <= high) {
            int mid = left + (high - left) / 2;

            if (arr[mid] == target)
                return mid;
            else if (arr[mid] > target)
                high = mid - 1;   // FIX
            else
                left = mid + 1;   // FIX
        }
        return -1;
    }
};
