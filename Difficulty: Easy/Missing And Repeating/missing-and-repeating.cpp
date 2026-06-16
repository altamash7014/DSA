class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int rep=-1;long long Summ=0;int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){rep = arr[i];break;
        }}
        for(int i= 0;i<arr.size();i++){
            Summ +=(long long)arr[i];
        }
        long long sum  = (long long)n*(n+1)/2;
        int miss = sum-(Summ-rep);
    return {rep,miss};}
};