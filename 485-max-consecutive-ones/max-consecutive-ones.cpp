class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();
        int i =0;
        if(n==1 && arr[0]==0)return 0;
        if(n==2 && arr[0]==0 && arr[1]==0)return 0;
        if(n==3 && arr[2]==0 && arr[0]==0 && arr[1]==0)return 0;
        if(n==4 && arr[3]==0 && arr[2]==0 && arr[0]==0 && arr[1]==0)return 0;
        int maxi =0;
        for(int j=1;j<n;j++){
            if(arr[j]==1  && arr[i]== arr[j] ){
                continue;
            }
            else{
                maxi = max(j-i,maxi);i= j+1;
            }


        }
        // last sequence when j touches end
        maxi = max(n - i, maxi);
        return maxi;
    }
};