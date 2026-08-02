class Solution {
public:
    int possible(vector<int>& arr,int mid){
        int sum=0;
        for(int i:arr){
            sum += ceil(double(i)/mid); 
        }
        return sum;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1;
        int high = *max_element(arr.begin(), arr.end());
        int ans =1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int sumt= possible(arr,mid);
                if(sumt<=threshold){
                    ans = mid;
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
        }return ans;    
    }
};