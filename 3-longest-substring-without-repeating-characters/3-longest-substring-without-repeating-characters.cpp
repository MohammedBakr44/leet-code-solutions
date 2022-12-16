class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int i = 0, j = 0;
       int res = INT_MIN;
       if(s.length() == 0) return 0;
        map<char, int> fq;
        while(j < s.length()) {
            fq[s[j]]++;
            if(fq.size() == j - i + 1) res = max(res, j - i + 1);
            else if(fq.size() < j - i + 1) {
                while(fq.size() < j - i + 1) {
                    fq[s[i]]--;
                    if(fq[s[i]] == 0) {
                        fq.erase(s[i]);
                    }
                    i++;
                }
            }
            j++;
        }
        return res;
    }
};