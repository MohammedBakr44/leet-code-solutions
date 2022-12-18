    bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }

class Solution {
public:

    void sort_map(map<int, int>& nums, vector<int>& res, int k) {
        vector<pair<int, int>> A;
        for(auto& it : nums) {
            A.push_back(it);
        }
        std::sort(A.begin(), A.end(), cmp);
        for(int i = 0; i < k; i++) {
            res.push_back(A[i].first);
        }
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        map<int, int> fq;
        for(int i = 0; i < nums.size(); i++) {
            fq[nums[i]]++;
        }
        sort_map(fq, res, k);
        return res;
    }
};