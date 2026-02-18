class Solution {
  public:
  bool Canweplace(vector<int>&arr,int dist,int k){
      int cnt=1;
      int last = arr[0];
      int n = arr.size();
      for(int i=1;i<n;i++){
          if(arr[i]-last >= dist){
              cnt++;last = arr[i];
          }}
          if(cnt>=k)return true;
          else return false;
      
  }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int ans;
        sort(arr.begin(),arr.end());
        int low = 0 ,high = arr[n-1]-arr[0]; 
        while(low<=high){
            int mid = (low+high)/2;
            if(Canweplace(arr,mid,k)==true){
                ans= mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
            return ans;
    }
};