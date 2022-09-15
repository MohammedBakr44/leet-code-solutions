class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        std::cin.tie(0);
        std::cout.tie(0);
        std::cout.sync_with_stdio(0);
        int maxSub = nums[0];
        int currentSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(currentSum < 0) currentSum = 0;
            currentSum += nums[i];
            if(currentSum > maxSub) maxSub = currentSum;
        }
        return maxSub;
    }
};