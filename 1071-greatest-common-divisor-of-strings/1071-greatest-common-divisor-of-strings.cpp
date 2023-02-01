class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string c1 = str1 + str2;
        string c2 = str2 + str1;
        if(c1 != c2) return "";
        int n = gcd(str1.length(), str2.length());
        return str1.substr(0, n);
    }
};