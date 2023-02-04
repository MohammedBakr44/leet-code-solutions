class Solution {
public:
    string convert(string s, int numRows) {
        string res = "";
        if(numRows == 1) return s;
        int inc = 2 * (numRows - 1);
        for(int i = 0; i < numRows; i++) { 
            for(int j = i; j < s.length(); j += inc) {
                res += s[j];
                if(i > 0 && i < numRows - 1 && j + inc - 2 * i < s.length()) {
                    res += s[j + inc - 2 * i];
                }
            }
        }
        return res;
    }
};