class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = words.size();
        map<char, int> mp;
        for(int i = 0; i < allowed.length(); i++) {
            mp[allowed[i]] = 0;
        }
        
        for(int i = 0; i < words.size(); i++) {
            string word = words[i];
            for(int j = 0; j < word.length(); j++) {
                if(!(mp.find(word[j]) != mp.end())) {
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};