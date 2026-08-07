class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int maxi =arr[0];int n = arr.size();int sum =0;
        // if(n == 1 && arr[0]==-1)return -1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi = max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }return maxi;
    }
};