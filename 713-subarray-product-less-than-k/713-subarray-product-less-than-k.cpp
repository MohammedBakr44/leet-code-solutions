class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i, j, res;
        i = j = res = 0;
        int n = nums.size();
        int prod = 1;
        if(k < 1) return 0;
        while(j < n) {
            prod *= nums[j];
            while(i <= j && prod >= k) {
                prod /= nums[i];
                i++;
            }
            res += j - i + 1;
            j++;
        }
        return res;
    }
};