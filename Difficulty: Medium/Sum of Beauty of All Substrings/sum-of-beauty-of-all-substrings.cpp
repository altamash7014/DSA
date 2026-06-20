class Solution {

  public:
    int beautySum(string s) {
        // Your code goes here
        int ans = 0;
        
        for(int i = 0; i<s.length();i++)
        {
            int arr[26] = {0};
            for(int j = i; j<s.length(); j++){
            
                arr[s[j]-'a']++;
                int maxi = 0 , mini = INT_MAX; 
                for(int k = 0; k<26; k++){
                
                    if(arr[k] > 0){
                        
                        maxi = max(maxi , arr[k]);
                        mini = min(mini , arr[k]);
                            
                    }
                }   
        
                ans += (maxi - mini);
            }
        }
        
        return ans;
    }
};
