class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int>fq;
        int ans;
        for(int i = 0; i < nums.size(); i++) {
            fq[nums[i]]++;
        }
        for(auto it : fq) {
            if(it.second > 1) { 
                ans = it.first; 
                return ans;
            }
        }
        return ans;
    }
};