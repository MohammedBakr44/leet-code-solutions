class Solution {
public:
    bool isPalindrome(string s) {
        string ts = "";
        string rs = "";
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) ts += ::tolower(s[i]);
        }
        for(int i = ts.length() - 1; i >= 0; i--) {
            rs += ts[i];
        }
        if(rs == ts) return true;
        return false;
    }
};