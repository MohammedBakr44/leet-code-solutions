class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size();
        if(nums.size() == 1) {
            if(target == nums[0]) {
                return 0;
            } else {
                return -1;
            }
        }
        while(r >= l) {
            int md = (l+r)/2;
            if(nums[md] == target) {
                return md;
            } else if(nums[md] < target) {
                l = md+1;
            } else {
                r = md-1;
            }
        }
        return -1;
    }
};