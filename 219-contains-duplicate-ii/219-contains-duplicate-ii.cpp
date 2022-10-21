class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>>idx;
        for(int i = 0; i < nums.size(); i++) {
            idx[nums[i]].push_back(i+1);
        }
        for(auto it: idx) {
            if(it.second.size() > 1) {
                for(int i = 0; i <it.second.size() - 1; i++) {
                    if(abs(it.second[i] - it.second[i+1]) <= k) return true;
                }
            }
        }
        return false;
    }
};