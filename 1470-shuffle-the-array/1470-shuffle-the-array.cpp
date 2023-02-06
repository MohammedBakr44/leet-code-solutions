class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int left = 0, right = n;
        while(left < n && right < nums.size()) {
            res.push_back(nums[left++]);
            res.push_back(nums[right++]);
        }
        return res;
    }
};