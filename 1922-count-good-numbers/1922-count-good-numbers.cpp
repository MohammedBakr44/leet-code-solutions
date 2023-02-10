class Solution {
public:
    int p = 1e9 + 7;
    
    long long power(long long x, long long y) {
        long long res = 1;
        x = x % p;
        if(x == 0) return 0;
        
        while(y > 0) {
            if(y & 1) res = (res*x) % p;
            
            y = y >> 1;
            x = (x*x) % p;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long four = n/2;
        long long five = n - four;
        long long ans = ((power(4LL, four) % p * power(5LL, five) % p) % p);
        return (int)ans;
    }
};