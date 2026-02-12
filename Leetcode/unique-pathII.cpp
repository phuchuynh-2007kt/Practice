#include <iostream>
#include <vector>

using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    //edgecase
    if (obstacleGrid[0][0] == 1) {
        return 0;
    }
    //rows 
    for (int i = 0; i < m; i++) {
        if (obstacleGrid[i][0] == 1) {
            obstacleGrid[i][0] = 0;
            break;
        }
        else {
            obstacleGrid[i][0] = 1;
        }
    }
    //columns
    for (int j = 1; j < n; j++) {
        if (obstacleGrid[0][j] == 1) {
            obstacleGrid[0][j] = 0;
            break;
        }
        else {
            obstacleGrid[0][j] = 1;
        }
    }
    //grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (obstacleGrid[i][j] != 0) {
                obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
            }
        }
    }
    return obstacleGrid[m - 1][n - 1];
}

