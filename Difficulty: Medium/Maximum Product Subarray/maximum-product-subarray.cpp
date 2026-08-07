class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int pref =1;
        int n = arr.size();
        int suff =1;
        int maxi = INT_MIN;
        if(n == 1 && arr[0]==0)return 0;
        for(int i=0;i<n;i++){
            if(pref == 0){
                pref =1;
            }
            if(suff == 0){
                suff =1;
            }
            pref *= arr[i];
            suff *= arr[n-i-1];
            maxi = max(maxi,max(pref,suff));
        }return maxi;
    }
};