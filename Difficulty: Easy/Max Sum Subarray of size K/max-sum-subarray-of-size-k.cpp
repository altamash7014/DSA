class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum =0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxi = sum;
        int n = arr.size();
        for(int j =0;j<n-k;j++){
            sum = sum - arr[j] +arr[j+k];
            maxi = max(maxi,sum);
        }return maxi;
    }
};