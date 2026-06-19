class Solution {
    int giveValue(char &c){
        if(c == 'I') return 1;
        else if(c == 'V')  return 5;
        else if(c == 'X')  return 10;
        else if(c == 'L')  return 50;
        else if(c == 'C')  return 100;
        else if(c == 'D')  return 500;
        else if(c == 'M')  return 1000;
        else return 0;
    }
  public:
    int romanToDecimal(string &s) {
        // code here 
        int n = s.length();
        int sum = 0;
        int i = 0;
        
        while(i < n){
            int val = giveValue(s[i]);
            
            //checking for twist 
            if(i + 1 < n && (val < giveValue(s[i+1]))){
                val = -val;
            }
            sum += val;
            i++;
        }
        
        return sum;
              
    } 
};