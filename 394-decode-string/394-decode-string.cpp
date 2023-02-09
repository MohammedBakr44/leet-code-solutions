class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decode(i, s);
    }
    string decode(int &i, string s) {
        int num = 0;
        string word = "";
        for(; i < s.length(); i++) {
            char cur = s[i];
            if(cur == '[') {
                string curStr = decode(++i, s);
                for(; num > 0; num--) word += curStr;
                // get into the function to get the string in between []
            } else if(isdigit(cur)) {
                num = num*10 + (cur - '0');
            } else if (cur == ']') {
                return word;
            } else {
                word += cur;
            }
        }
        return word;
    }
};