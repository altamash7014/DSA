class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        int ans = arr[0] + arr[1] + arr[2];

        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = arr[i] + arr[left] + arr[right];

                if (abs(target - sum) < abs(target - ans))
                    ans = sum;

                if (sum == target)
                    return target;
                else if (sum < target)
                    left++;
                else
                    right--;
            }
        }

        return ans;
    }
};