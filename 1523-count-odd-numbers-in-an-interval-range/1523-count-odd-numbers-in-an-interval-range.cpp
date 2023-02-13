class Solution {
public:
    int countOdds(int low, int high) {
        int n = high - low + 1;
        int res = n / 2;
        if(n % 2 && low % 2) res++;
        return res;
    }
}; 