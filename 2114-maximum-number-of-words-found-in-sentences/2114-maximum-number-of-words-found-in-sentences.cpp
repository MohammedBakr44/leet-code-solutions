class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(int i = 0; i < sentences.size(); i++) {
            string s = sentences[i];
            int spaces = 1;
            for(int j = 0; j < s.size(); j++) {
                if(s[j] == ' ') {
                    spaces++;
                    if(spaces > ans) ans = spaces;
                }
            }
            spaces = 1;
        }
        return ans == 0 ? 1 : ans;
    }
};