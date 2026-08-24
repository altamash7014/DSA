class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        
        // Handle single element case
        if (n == 1) return 0;
        
        // Check if the first element is a peak
        if (arr[0] > arr[1]) return 0;
        
        // Check if the last element is a peak
        if (arr[n - 1] > arr[n - 2]) return n - 1;
        
        // Search the strictly inner elements
        int st = 1;
        int end = n - 2;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            // Peak found
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            
            // If we are on an uphill slope, move right
            if (arr[mid] > arr[mid - 1]) {
                st = mid + 1;
            } 
            // If we are on a downhill slope, move left
            else {
                end = mid - 1;
            }
        }
        
        return -1; // Dummy return, LeetCode guarantees a peak exists
    }
};