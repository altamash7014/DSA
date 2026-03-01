class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int cnt =0;
        int n = arr.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                res.push_back(arr[i]);
                cnt++;
            }
        }
        while(cnt<n){
            res.push_back(0);
            cnt++;
        }
        for(int i=0;i<n;i++){
            arr[i]= res[i];}
        
    }
};