class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string>mp;
        string temp = "";
        int pt = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] != ' ') {
                temp += s[i];
            } else {
                char l = pattern[pt];
                if(!mp.count(l)) { 
                    bool flag = 1;
                    for(auto &it : mp) {
                        if(it.second == temp) {
                            flag = 0;
                        }
                    }
                    if(flag) mp[l] = temp;
                }
                pt++;
                temp = "";
            }
        } 
        // add the last word to the map
        char l = pattern[pt];
        if(!mp.count(l)) { 
            bool flag = 1;
            for(auto &it : mp) {
                if(it.second == temp) {
                     flag = 0;
                   }
                }
            if(flag) mp[l] = temp;
        }
        string res = "";
        for(int i = 0; i < pattern.length(); i++) {
            char l = pattern[i];
            if(i != pattern.length() - 1) res += mp[l] + " ";
            else res += mp[l];
        } 
        return res == s;
    }
};