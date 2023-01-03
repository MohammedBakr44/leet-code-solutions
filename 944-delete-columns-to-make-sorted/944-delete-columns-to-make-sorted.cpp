class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        int n = strs[0].length();
        for(int i = 0; i < n; i++) {
            string temp = "";
            string sorted = "";
            for(int j = 0; j < strs.size(); j++) {
                temp += strs[j][i];
                sorted += strs[j][i];
            }
            sort(sorted.begin(), sorted.end());
            if(temp != sorted) res++;
        }
        return res;
    }
};