class Solution {
  private:
    int reverse(int n){
            int i = 0;
            int rem =0;
            int sum =0;
        while(n>0){
            rem = n%10;
            sum = 10*i*sum + rem;
            i++;n = n/10;
        }
        return sum;
    }
  
  public:
    int reverseExponentiation(int n) {
        // code here
        return pow(n,reverse(n));
        
    }
    
};