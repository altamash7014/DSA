class Solution {
public:
    int findmaxi(vector<int>& p) {
        int m = 0;
        for (int i = 0; i < p.size(); i++) {
            m = max(m, p[i]);
        }
        return m;
    }
    long long findhr(vector<int>& r, int v) {
        long long totalhr = 0;
        for (int i = 0; i < r.size(); i++) {
            totalhr += ((long long)r[i] + v - 1) / v;
        }
        return totalhr;
    }
    int kokoEat(vector<int>& arr, int k){
        if (k < arr.size()) return -1;
        int low = 1;
        int high = findmaxi(arr);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long th = findhr(arr, mid);
            if (th <= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};