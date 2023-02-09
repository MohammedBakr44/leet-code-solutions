class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return (double) 1; // base case
        if(x == 0) return 0; // handle 0^n
        if(n < 0) { 
            // negative exponents
            n = abs(n);
            x = 1/x;
        } 
        return n % 2 ? x * myPow(x*x, n/2) : myPow(x*x, n/2);
        // positive exponents.
       }
};