class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> char_mp;
        for(int i = 0; i < s.length(); i++) {
            char_mp[s[i]]++;
        }
        int result = 0;
        for(auto it : char_mp) {
            result += it.second / 2 * 2;
            // 
            if(result % 2 == 0 && it.second % 2 == 1) {
                result += 1;
            }
        }
        return result;
    }
};