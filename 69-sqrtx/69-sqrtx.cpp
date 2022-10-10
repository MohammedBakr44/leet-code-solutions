class Solution {
public:
    int mySqrt(int x) {
        long long l=0, r=INT_MAX;
        int ans = 0;
        while(l <= r) {
            long long md = (l+r)/2;
            if(md*md <= x) {
                ans = md;
                l = md+1;
            } else {
                r=md-1;
            }
        }
        return ans;
    }
};