class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string res1,res2;
        for (char c : s) {
            if (c != '#') {
                res1.push_back(c);
            } else if (!res1.empty()) {
                res1.pop_back();
            }
        }
        for (char c : t) {
            if (c != '#') {
                res2.push_back(c);
            } else if (!res2.empty()) {
                res2.pop_back();
            }
        }
       
        if(res1==res2){
            return true;}
        else return false;
    }
};