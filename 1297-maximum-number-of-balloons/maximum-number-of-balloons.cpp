class Solution {
public:
    int maxNumberOfBalloons(string s) {
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }

        int mini = INT_MAX;

        mini = min(mini, freq['b' - 'a']);
        mini = min(mini, freq['a' - 'a']);
        mini = min(mini, freq['l' - 'a'] / 2);
        mini = min(mini, freq['o' - 'a'] / 2);
        mini = min(mini, freq['n' - 'a']);

        return mini;
    }
};