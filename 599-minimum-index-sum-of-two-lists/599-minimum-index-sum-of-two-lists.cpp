class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int>mp1;
        int sum = INT_MAX;
        vector<string> ans;
        for(int i = 0; i < list1.size(); i++) {
            mp1[list1[i]] = i;
        }
        for(int j = 0; j < list2.size(); j++) {
            if(mp1.find(list2[j]) != mp1.end()) {
                int s = mp1[list2[j]] + j;
                if(s < sum) {
                    ans.clear();
                    sum = s;
                    ans.push_back(list2[j]);
                } else if(s == sum) {
                    ans.push_back(list2[j]);
                }
            }
        }
        return ans;
    }
};