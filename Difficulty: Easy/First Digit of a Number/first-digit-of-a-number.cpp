int firstDigit(int n) {
    // code here
     int dig;
    while(n>=10){  
        n=n/10;   
    }
    return n;
}