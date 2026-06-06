class Solution {
  public:
    void printNos(int n) {
        // Base condition
        if(n == 0) {
            return;
        }

        cout << n << " ";
        printNos(n - 1);
    }
};