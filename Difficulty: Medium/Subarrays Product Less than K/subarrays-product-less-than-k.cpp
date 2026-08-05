class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        // code here
        // sort(arr.begin(),arr.end());
        int n = arr.size();
        int prod =1;
        int cnt=0;int start =0;
        for(int right =0;right<n;right++){
            prod*= arr[right];
            while(start <= right && prod>=k){
                prod/= arr[start];
                start++;
            }
            cnt+=(right-start+1);
        }
        return cnt;
        
    }
};