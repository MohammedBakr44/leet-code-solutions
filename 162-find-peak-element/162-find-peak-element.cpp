class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak = nums[0];
        int idx = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > peak) {
                peak = nums[i];
                idx = i;
            }
        }
        return idx;
    }
};