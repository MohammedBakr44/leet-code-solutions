class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int>charfq;
        for(int i = 0; i < s.length(); i++) {
            charfq[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(charfq[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};