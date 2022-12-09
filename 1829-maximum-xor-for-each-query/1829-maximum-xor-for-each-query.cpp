class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size(), XOR = 0;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            XOR ^= nums[i];
        }
        ans[0] = XOR ^= (1 << maximumBit) - 1;
        for(int i = 1; i < n; i++) {
            ans[i] = XOR ^= nums[n - i];
        }
        return ans;
    }
};