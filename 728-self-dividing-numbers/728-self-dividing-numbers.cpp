class Solution {
public:
    int checkSelfDividing(int n) {
        int temp = n;
        while(temp > 0) {
            int last = temp % 10;
            if(last == 0) return 0;
            if(n % last != 0) return 0;
            temp /= 10;
        }
        return n;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++) {
            if(checkSelfDividing(i)) ans.push_back(i);
        }
        return ans;
    }
};