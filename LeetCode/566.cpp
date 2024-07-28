class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
      vector<vector<int>> s(r,vector<int>(c, 0));
        int x = 0, y = 0;

        if (mat.size() * mat[0].size() == r * c) {
            for (int i = 0; i < mat.size(); ++i) {
                for (int j = 0; j < mat[0].size(); ++j) {
                    if (y == c) {
                        x++;
                        y = 0;
                    }
                    s[x][y] = mat[i][j];
                    y++;
                }
            }
            return s;
        }
        return mat;
    }
};
