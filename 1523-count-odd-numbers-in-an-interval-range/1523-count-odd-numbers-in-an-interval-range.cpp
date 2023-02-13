class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0;
        if(!(low & 1)) low++;
        return low > high ? 0 : (high - low) / 2 + 1;
    }
}; 