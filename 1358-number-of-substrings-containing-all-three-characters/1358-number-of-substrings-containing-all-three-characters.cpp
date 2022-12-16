class Solution {
public:
    int numberOfSubstrings(string s) {
        int i, j, res;
        i = j = res = 0;
        int fq[3] = {0, 0, 0};
        for(; j < s.size(); j++) {
            fq[s[j] - 'a']++;
            while(fq[0] && fq[1] && fq[2]) {
                fq[s[i++] - 'a']--;
            }
            res += i;
        }
        return res;
    }
};