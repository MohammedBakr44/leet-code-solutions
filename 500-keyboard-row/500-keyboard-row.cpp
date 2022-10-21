class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";
        map<char, int> row1;
        map<char, int> row2;
        map<char, int> row3;
        vector<string> ans;
        for(int i = 0; i < r1.length(); i++) {
            row1[r1[i]] = 1;
            row1[::toupper(r1[i])] = 1;
        }
        for(int i = 0; i < r2.length(); i++) {
            row2[r2[i]] = 2;
            row2[::toupper(r2[i])] = 2;
        }
        for(int i = 0; i < r3.length(); i++) {
            row3[r3[i]] = 3;
            row3[::toupper(r3[i])] = 3;
        }
        /****************************************/
        for(int i = 0; i < words.size(); i++) {
            string word = words[i];
            map<char, int> row;
            for(int j = 0; j < word.length(); j++) {
                if(row1[word[j]]) row[word[j]] = 1;
                if(row2[word[j]]) row[word[j]] = 2;
                if(row3[word[j]]) row[word[j]] = 3;
            }
            int r;
            if(row1[word[0]]) r = 1;
            if(row2[word[0]]) r = 2;
            if(row3[word[0]]) r = 3;
            ans.push_back(word);
            for(auto it: row) {
                int ri = it.second;
                if(ri != r) {
                    ans.pop_back();
                    break;
                }
            }
        }
        return ans;
    }
};