class Solution {
  public:
    int findPosition(int n)
  {
      // Check if n has exactly one set bit
      if (n == 0 || (n & (n - 1)) != 0)
          return -1;

      // Find position of the set bit using log2
      return log2(n) + 1;
  }
};