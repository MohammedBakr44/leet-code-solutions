class Solution {
public:
    string defangIPaddr(string address) {
        std::string ans = "";
        for(int i = 0; i < address.length(); i++) {
            address[i] == '.' ? ans += "[.]" : ans += address[i];
        }
        return ans;
    }
};