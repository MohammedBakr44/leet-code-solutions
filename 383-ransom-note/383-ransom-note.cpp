class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> fqm;
        map<char, int> fqr;
        for(int i = 0; i < magazine.length(); i++) {
            fqm[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.length(); i++) {
            fqr[ransomNote[i]]++;
        }
        for(int i = 0; i < ransomNote.length(); i++) {
            if( (fqm[ransomNote[i]] < fqr[ransomNote[i]]) ) {
                return false;
            }
        }
        return true;
    }
};