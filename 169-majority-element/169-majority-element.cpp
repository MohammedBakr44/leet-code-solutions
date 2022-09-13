class Solution {
public:
    long long majorityElement(vector<int>& nums) {
        int counter = 0;
        int candidate = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(counter == 0) {
                candidate = nums[i];
            }
            if(candidate == nums[i]) {
                counter++;
            } else {
                counter--;
            }
        }
        return candidate;
    }
};