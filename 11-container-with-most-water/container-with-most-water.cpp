class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi = 0;
        int n = height.size();
        int st =0;int end = n-1;
        int cnt = n-1;
        while(st<end){
            int mini = min(height[st],height[end]);
            maxi = max(maxi,mini*cnt);
            if(mini == height[st]){
                st++;cnt--;
            }
            else {end--;cnt--;}

        }return maxi;
    }
};