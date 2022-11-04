class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp = x;
        long long r = 0;
        while(temp > 0) {
            int last = temp % 10;
            r = r * 10 + last;
            temp /= 10;
        }
        if(r == x) {
            return true;
        }
         return false;
    }
};