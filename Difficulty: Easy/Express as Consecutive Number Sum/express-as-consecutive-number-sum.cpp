class Solution {
  public:
    bool isSumOfConsecutive(int n) {
        // rule is to check power of 2
        // powe of 2 are not exprssed
        return (n & (n - 1));
    }
};