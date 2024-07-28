#include <bits/stdc++.h>
int projectionArea(vector<vector<int>> &grid) {
    int n=grid.size();
    int z=0,x=0,y=0;
    for(int i=0;i<n;i++){
        int ymax=0;
        int xmax=0;
        for(int j=0; j<n;j++){
            if(grid[i][j]!=0) z++;
            if(grid[i][j]>ymax) ymax = grid[i][j];
            if(grid[j][i]>xmax) xmax = grid[j][i];

        }
        x+=xmax;
        y+=ymax;
    }
    return x+y+z;
}
