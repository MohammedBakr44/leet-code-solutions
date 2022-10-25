class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> fq;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            fq[nums[i]]++;
        }
        for(auto it : fq) {
            ans += it.second*(it.second - 1) / 2;
        }
        return ans;
    }
};