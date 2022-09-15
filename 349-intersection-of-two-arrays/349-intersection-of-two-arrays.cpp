class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int fq1[1000] = {0};
        int fq2[1000] = {0};
        vector<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            fq1[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++) {
            fq2[nums2[i]]++;
        }
        for(int i = 0; i < 1000; i++) {
            if(fq1[i] >= 1 && fq2[i] >= 1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};