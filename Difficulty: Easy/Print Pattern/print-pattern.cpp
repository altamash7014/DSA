class Solution {
private:
    void buildPattern(int n, vector<int>& result) {
        // Step 1: Add the current number on the way DOWN
        result.push_back(n);
        
        // Base Case: Turning point when we hit 0 or negative
        if (n <= 0) {
            return;
        }
        
        // Step 2: Recursive Call (subtracting 5)
        buildPattern(n - 5, result);
        
        // Step 3: Add the current number again on the way BACK UP
        result.push_back(n);
    }

public:
    vector<int> pattern(int n) {
        vector<int> result;
        buildPattern(n, result);
        return result;
    }
};