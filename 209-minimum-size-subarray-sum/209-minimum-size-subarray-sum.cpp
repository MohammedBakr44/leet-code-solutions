class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int res = INT_MAX;
        int sum = 0;
        while(j < n) {
            sum += nums[j++];
            while(sum >= target) {
                res = min(res, j - i);
                sum -= nums[i++];
            }
        }
        return res%INT_MAX;
    }
};