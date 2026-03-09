#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string largestSwap(string &s) {
        int n = s.size();

        // Store the last index of each digit (0-9)
        vector<int> last(10, -1);
        for (int i = 0; i < n; i++) {
            last[s[i] - '0'] = i;
        }

        // Traverse the string
        for (int i = 0; i < n; i++) {
            // check from 9 down to current+1
            for (int d = 9; d > s[i] - '0'; d--) {
                if (last[d] > i) {
                    // Swap with the rightmost bigger digit
                    swap(s[i], s[last[d]]);
                    return s;
                }
            }
        }

        // If no swap improves, return original
        return s;
    }
};
