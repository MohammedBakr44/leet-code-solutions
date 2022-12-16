class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        long long i, j, res, odd;
        i = j = res = odd = 0;
        for(; j < nums.size(); j++) {
            if(nums[j] & 1) --k, odd = 0;
            while(k == 0) k += nums[i++] & 1, ++odd;
            res += odd;
        }
        return res;
    }
};