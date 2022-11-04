class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 0, r = INT_MAX; 
        while(l <= r) {
            long long md = (l+r)/2;
            long long sq = md*md;
            if(sq == num) return true;
            else if(sq < num) l = md+1;
            else r = md-1;
        }
        return false;
    }    
};