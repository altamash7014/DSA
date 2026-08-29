class Solution {
  public:
    bool isIntersect(vector<vector<int>> arr) {
        // Code Here
        
        sort(arr.begin(),arr.end());
        int strt1= arr[0][0];
        int end1= arr[0][1];
        for(int i =1;i<arr.size();i++){
            int strt2 = arr[i][0];
            int end2 = arr[i][1];
            if(end1>=strt2){
                return true;
            }
            
            strt1= strt2;
            end1= end2;
        }
        
        return false;
    }
};