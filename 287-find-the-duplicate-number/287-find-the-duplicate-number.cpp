class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> fq(n+1, 0);
        int res;
        for(int i = 0; i < nums.size(); i++) {
            if(fq[nums[i]]) res = nums[i];
            fq[nums[i]]++;
        }
        return res;
    }
};