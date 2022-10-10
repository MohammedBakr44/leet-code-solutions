class Solution {
public:
    int missing(int a, int b) {
        return a - b;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0, r = arr.size() -1;
        while(l <= r) {
            int md = (l+r)/2;
            if(missing(arr[md], md + 1) >= k) {
                r = md - 1;
            } else {
                l = md + 1;
            }
        }
        if(r == -1) {
            return k;
        }
        return arr[r] + k - missing(arr[r], r + 1);
    }
};