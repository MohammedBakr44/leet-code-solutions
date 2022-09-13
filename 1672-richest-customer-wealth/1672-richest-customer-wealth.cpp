class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        for(int i = 0; i < accounts.size(); i++) {
            for(int j = 0; j < accounts[i].size(); j++) {
                if(j) accounts[i][j] += accounts[i][j-1]; 
            }
        }
        int max = accounts[0][0];
        for(int i = 0; i < accounts.size(); i++) {
                if(accounts[i][accounts[i].size() - 1] > max) max = accounts[i][accounts[i].size() - 1];
        }
        return max;
    }
};