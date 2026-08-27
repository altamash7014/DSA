class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int position = 1;

        while((n & 1) == 0){
            n = n >> 1;
            position++;
        }

        return position ;
    }
};