class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> freq(n+1,0);
        for(int i =0;i<n;i++){
            if(citations[i]>=n)
            freq[n]++;
            else
                freq[citations[i]]++;
        }
        int hind = n;
        int num = freq[n];
        while(num<hind){
            hind--;
            num +=freq[hind];
        }
        return hind;
    }
};