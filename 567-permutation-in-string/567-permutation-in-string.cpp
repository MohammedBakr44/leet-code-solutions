class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int fq[26] = {0};
        for(int i = 0; i < s1.length(); i++) {
            fq[s1[i] - 'a']++;
        }
        if(s1 == s2) return true;
        string p = s1;
        sort(p.begin(), p.end());
        string sub = s2.substr(0, p.length());
        if(p == sub) return true;
        if(s1.length() > s2.length()) return false;
        for(int i = 0; i < s2.length() - s1.length() + 1; i++) {
            if(fq[s2[i] - 'a']) {
                string sub = s2.substr(i, s1.length());
                sort(sub.begin(), sub.end());
                if(sub == p) return true;
            }
        }
        return false;
    }
};