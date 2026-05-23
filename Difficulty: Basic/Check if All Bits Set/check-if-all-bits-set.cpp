class Solution {
  public:
    bool isBitSet(int n) {
        // code here
        if(n==0)return false;
        while(n){
            int bit= n&1;
            if(!bit)return false;
            n= n>>1;
        }
        return true;
    }
};