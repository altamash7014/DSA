class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        int n  = arr.size();
        // int right = n-1;
        // int left = 0;
        int sumi=0;
        int count =0;
        sort(arr.begin(),arr.end());
        for(int i =0;i<n-2;i++){
            
            int left =i+1;
            int right = n-1;
            while(left<right){
                int sumi = (arr[i]+arr[left] + arr[right]);
                if(sumi<sum){
                    count+=(right-left);//important
                    left++;
                    
                }else{
                    right--;
                }
            }
        }return count;
    }
};