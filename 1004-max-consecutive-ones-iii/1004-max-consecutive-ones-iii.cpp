class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i, j;
        i = j = 0;
        for(; j < nums.size(); j++) {
            if(nums[j] == 0) k--;
            if(k < 0 && nums[i++] == 0) k++;
        }
        return j - i;
    }
};