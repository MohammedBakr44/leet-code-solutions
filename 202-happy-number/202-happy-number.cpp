class Solution {
public:
    bool isHappy(int n) {
        map<int, int> seen;
        while(n != 1) {
            int current = n;
            int sum = 0;
            while(current != 0) {
                int d = current % 10;
                sum += pow(d, 2);
                current /= 10;
            }
            if(seen.find(sum) != seen.end()) {
                return false;
            }
            seen[sum]++;
            n = sum;
        }
        return true;
    }
};