
class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int l =0;
        int h =n-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]==k)return mid;
            else if(arr[mid]<k){l = mid+1;}
            else if(arr[mid]>k) {h = mid-1;}
            else return mid+1; 
        }
    }
};