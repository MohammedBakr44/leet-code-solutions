class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == ' ' && s[i + 1] != ' ') {
                length = 0;
            } else if(s[i] != ' ') {
                length++;
            }
        }
        return s[s.length() - 1] == ' ' ? length : length + 1; 
    }
};