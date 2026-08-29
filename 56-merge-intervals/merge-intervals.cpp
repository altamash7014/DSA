class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int strt1= arr[0][0];
        int end1= arr[0][1];
        for(int i =1;i<arr.size();i++){
            int strt2 = arr[i][0];
            int end2 = arr[i][1];
            if(end1>=strt2){
                strt1 = strt1;
                end1 = max(end1,end2);
                continue;
            }
            ans.push_back({strt1,end1});
            strt1= strt2;
            end1= end2;
        }
        ans.push_back({strt1,end1});
        return ans;
    }
};