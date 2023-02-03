class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int n = s.length();
        int sections = ceil(n / (2 * numRows - 2.0));
        int numCols = sections * (numRows - 1);
        
        vector<vector<char>> matrix(numRows, vector<char>(numCols, ' '));
        int currRow = 0, currCol = 0;
        int currStringIdx = 0;
        
        while(currStringIdx < n) {
            // Move down
            while(currRow < numRows && currStringIdx < n) {
                matrix[currRow][currCol] = s[currStringIdx];
                currRow++;
                currStringIdx++;
            }
            
            currRow -= 2;
            currCol++;
            // Move up and right
            while(currRow > 0 && currCol < numCols && currStringIdx < n) {
                matrix[currRow][currCol] = s[currStringIdx];
                currRow--;
                currCol++;
                currStringIdx++;
            }
        }
        string ans = "";
        for(auto& row : matrix) {
            for(auto& character : row) {
                if(character != ' ') {
                    ans += character;
                }
            }
        }
        return ans;
    }
};