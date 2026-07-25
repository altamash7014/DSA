class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {

        int n = arr.size();

        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int cnt = 0;
        int maxi = 0;

        int i = 0, j = 0;

        while (i < n && j < n) {

            if (arr[i] <= dep[j]) {   // next event is arrival
                cnt++;
                maxi = max(maxi, cnt);
                i++;
            }
            else {                    // next event is departure
                cnt--;
                j++;
            }
        }

        return maxi;
    }
};