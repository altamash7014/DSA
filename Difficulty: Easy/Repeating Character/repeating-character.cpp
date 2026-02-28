
class Solution {
  public:
    int repeatedCharacter(string& s) {
        
        int visited[256];   // now stores first index
        
        for(int i = 0; i < 256; i++)
            visited[i] = -1;
        
        int res = -1;
        
        for(int i = 0; i < s.length(); i++){
            if(visited[s[i]] == -1)
                visited[s[i]] = i;
            else {
                if(res == -1 || visited[s[i]] < res)
                    res = visited[s[i]];
            }
        }
        
        return res;
    }
};