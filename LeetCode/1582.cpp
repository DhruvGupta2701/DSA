class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> row(mat.size(), 0);
        vector<int> col(mat[0].size(), 0);

        for(int x=0; x<mat.size(); x++) {
            for(int i=0; i<mat[x].size(); i++) {
                row[x] += mat[x][i];
                col[i] += mat[x][i];
            }
        }
        int res = 0;
        for(int x=0; x<row.size(); x++) {
            if(row[x]==1) {
                for(int i=0; i<col.size(); i++) {
                    if(col[i]==1 && mat[x][i]==1) res++;
                }
            }
        }
        return res;
    }
};
