class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int>fq;
        if(s.length() != t.length()) return false;
        for(int i = 0; i < s.length(); i++) {
            fq[s[i]]++;
            fq[t[i]]--;
        }
        for(auto it : fq) {
            if(it.second != 0) return false;
        }
        return true;
    }
};