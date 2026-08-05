class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
        int n = arr.size();
        int cnt =0;
        // int mul =1;
        for(int i =0;i<n;i++){
            long long mul = arr[i];
            // mul*=arr[i];
            if(mul<k){
                cnt++;
            }
            for(int j =1+i;j<n;j++){
                mul*= arr[j];
                if(mul<k){
                cnt++;
                }
                else break;
            }
        }
        return cnt;
    }
};