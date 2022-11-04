class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long i = 1;
        while(i < n) {
            i *= 2;
        }
        if(i == n) return true;
        return false;
    }
};