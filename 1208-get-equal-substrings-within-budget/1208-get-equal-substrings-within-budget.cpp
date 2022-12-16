class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i, j, sum, cost, res;
        i = j = sum = cost = res = 0;
        while(j < s.length()) {
            cost = abs(s[j] - t[j]);
            sum += cost;
            if(sum <= maxCost) {
                res = max(res, j - i + 1);
            }
            while(sum > maxCost && i <= j) {
                sum -= abs(s[i] - t[i]);
                i++;
            }
            j++;
        }
        return res;
    }
};