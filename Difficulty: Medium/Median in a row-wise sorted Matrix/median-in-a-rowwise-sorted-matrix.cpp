class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
       vector<int>all_asc;
       for(int i=0;i<mat.size()
;i++){
    for(int j=0;j<mat[i].size();j++){
        all_asc.push_back(mat[i][j]);
    }
}
sort(all_asc.begin(),all_asc.end());
return all_asc[all_asc.size()/2];

 

    }
};