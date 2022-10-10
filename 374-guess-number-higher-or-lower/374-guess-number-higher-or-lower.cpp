/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l = 0, r = n;
        int ans;
        if(guess(n) == 0) return n;
        while(l <= r) {
            long long md = (l+r)/2;
            if(guess(md) == 0) {
                ans = md;
                return ans;
            } else if(guess(md) == -1) {
                r = md;
            } else {
                l = md;
            }
        }
        return ans;
    }
};