class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()) {
                result.push_back(mp[comp]);
                result.push_back(i);
                return result;
            }
            mp[nums[i]] = i;
            
        }
        return result;
    }
};