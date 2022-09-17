
bool isZero (int i) {
    return i == 0;
}

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result(r ,vector<int>(c));
        vector<int> cols(c, 0);
        int row = mat.size();
        int column = mat[0].size();
        int m = 0, n = 0;
        if(row*column != r*c) {
            return mat;
        }
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {
                    result[m][n] = mat[i][j];
                    n++;
                    if(n == c) {
                        m++;
                        n=0;
                    }
            }
        }
        return result;
    }
};