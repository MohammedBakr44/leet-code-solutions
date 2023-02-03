class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char, int> order_map;
        for(int i = 0; i < order.length(); i++) {
            order_map[order[i]] = i + 1;
        }
        for(int i = 0; i < words.size() - 1; i++) {
                for(int j = 0; j < words[i].length(); j++) {
                    char c = words[i][j];
                    char n = words[i+1][j];
                    if(j >= words[i+1].length()) return false;
                    if(c != n) {
                        if(order_map[c] > order_map[n]) return false;
                        break;
                    }
                }
        }
        return true;
            
    }
};