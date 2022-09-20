class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row_len = matrix.size(), col_len = matrix[0].size();
            int l = 0, r = row_len * col_len;
            while(l < r) {
                int md = (l+r)/2;
                if(matrix[md / col_len][md % col_len] == target) {
                    return true;
                } else if(matrix[md / col_len][md % col_len] < target) {
                    l = md + 1;
                } else {
                    r = md;
                }
            }
        return false;
}
};