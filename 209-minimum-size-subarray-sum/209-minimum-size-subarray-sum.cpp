class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        int res = INT_MAX;
        int sum = 0;
        while(j < n) {
            sum += nums[j];
            j++; // add j to sum and then increment it
            while(sum >= target) { // keep looping if sum >= target;
                res = min(res, j - i);
                sum -= nums[i]; // decrease the value from right to get the minimum subarray
                i++; // decrease i
                // 7 [2, 3, 1, 2, 4, 3]
                // sum = 2; condition not satisfied, sum += 3
                // sum = 5, condition not satisfied, sum += 1 = 6;
                // condition not satisified, sum += 2 = 8; condition satisfied;
                // subtract nums[0] so it becomes 8 - 2 = 6;
                // condition not satisfied so add j amd update j;
            }
        }
        return res%INT_MAX;
    }
};