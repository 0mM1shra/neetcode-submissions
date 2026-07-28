class Solution {
public:
    
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        // Push every gate
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==0)
                q.push({i,j});
            }
        }
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();

        // Visit neighbours
        for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx >= 0 && nx < n &&
                    ny >= 0 && ny < m &&
                    grid[nx][ny] == INT_MAX) {

                    grid[nx][ny] = grid[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
};
