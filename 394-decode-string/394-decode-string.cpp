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
                // get into the function to get the string in between []
                for(; num > 0; num--) word += curStr; 
                // print the word in between [] for num times.
            } else if(isdigit(cur)) {
                num = num*10 + (cur - '0'); // get the number of times to print the word
            } else if (cur == ']') {
                return word; // the word is done, return what you have
            } else {
                word += cur; // add the current character to word, when in between [];
            }
        }
        return word;
    }
};