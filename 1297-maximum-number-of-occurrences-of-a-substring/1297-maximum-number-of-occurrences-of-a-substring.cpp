class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int i, j, u, res, fq[26] = {};
        i = j = u = res = 0;
        map<string, int> mp;
        while(j < s.size()) {
            if(++fq[s[j++] - 'a'] == 1) u++;
            while(u > maxLetters || j - i > minSize)
                if(--fq[s[i++] - 'a'] == 0) u--;
            if(j - i == minSize) res = max(res, ++mp[s.substr(i, minSize)]);
        }
        return res;
    }
};