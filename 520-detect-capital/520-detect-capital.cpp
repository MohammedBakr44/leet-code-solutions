class Solution {
public:
    bool detectCapitalUse(string word) {
        int c = 0, s = 0;
        for(int i = 0; i < word.length(); i++) {
            if(word[i] >= 65 && word[i] && word[i] <= 90) {
                c++;
            } else {
                s++;
            }
        }

        if(c == word.length()) {
            return true;
        } else if(c == 0 && s == word.length()) {
            return true;
        } else if(c == 1 && word[0] >= 65 && word[0] <= 90) {
            return true;
        }
        return false;
    }
};