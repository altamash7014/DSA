class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int pref =0;
        int total =0;
        for(int i=0;i<nums.size();i++){
            total +=nums[i];
        }
        for(int p=0;p<nums.size();p++){
            int suff = total-nums[p]-pref;
            if(suff==pref){
                return p;
            }
            pref+=nums[p];
        }
        return -1;
    }
};