class Solution {
  public:
    int setBits(int N) {
        // Code here
        int setBits=0;

        while(N>0)
        {
            N=N&(N-1);
            setBits++;
        }

            return setBits;
    }
};