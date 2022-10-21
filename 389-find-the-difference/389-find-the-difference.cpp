class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> fq;
        char ans = t[0];
        for(int i = 0; i < s.length(); i++) {
            fq[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++) {
            if((fq.find(t[i]) != fq.end()) && fq[t[i]] == 0 || !(fq.find(t[i]) != fq.end())) {
                ans = t[i];
                return ans;
            } else {
                fq[t[i]]--;
            }
        }
        return ans;
    }
};