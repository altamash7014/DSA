class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int sum =0;
        for(int i = 0;i<k;i++){
            sum = sum^arr[i];
        }
        int maxi = sum;
        // int sum =0;
        int j =0;
        while(j+k<arr.size()){
            sum = sum^arr[j]^arr[j+k];
            j++;
            maxi = max(sum,maxi); 
        }
        return maxi;
    }
};