class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
    int n  = arr.size();
        // int right = n-1;
        // int left = 0;
        int sum=0;
        int mini = INT_MAX;
        int count =0;
        int ans =0;
        sort(arr.begin(),arr.end());
        for(int i =0;i<n-2;i++){
            if (i > 0 && arr[i] == arr[i - 1]) continue;
            int left =i+1;
            int right = n-1;
            while(left<right){
                int sum = arr[i] + arr[left] + arr[right];
int diff = abs(target - sum);

if(diff < mini){
    ans = sum;
    mini = diff;
}

if(sum == target)
    return target;
else if(sum < target)
    left++;
else
    right--;
            }
        }return ans;        
                // mini = min(diff,mini);
    }
};