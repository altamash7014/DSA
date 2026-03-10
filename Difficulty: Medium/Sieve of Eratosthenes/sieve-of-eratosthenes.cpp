class Solution {
public:
    vector<int> sieve(int n) {
        int count[10001] = {0};
        vector<int> v;
        for(int j = 2;j<=n;j++){
            if(count[j] > 0){
                continue;
            }
            for(int k = j;k<=n;k = k+j){
               if(k == j){
                 v.push_back(k);
               }
               count[k]++;
           }
        }
        return v;
    }
};