class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int i, j, res, total;
        i = j = res = total = 0;
        for(; j < nums.size(); j++) {
            while((total & nums[j]) != 0) {
                total ^= nums[i++];
            }
            total |= nums[j];
            res = max(res, j - i + 1);
        }
        return res;
    }
};