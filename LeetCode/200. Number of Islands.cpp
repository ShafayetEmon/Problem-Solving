class Solution {
public:
    int dirs[5] = {-1, 0, 1, 0, -1};
    void dfs(int r, int c, vector<vector<char>>&grid){
        int nr = grid.size();
        int nc = grid[0].size();
        
        grid[r][c] = '0';
        for(int i = 0; i<4; i++)
        {
            int X = r + dirs[i];
            int Y = c + dirs[i+1];
            if(X >= 0 && Y >= 0 && X < nr && Y < nc && grid[X][Y] == '1')
            {
                dfs(X, Y, grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        
        int islandCount = 0;
        for(int r = 0; r < nr; r++)
        {
            for(int c = 0; c < nc; c++)
            {
                if(grid[r][c] == '1')
                {
                    islandCount++;
                    dfs(r, c, grid);
                }
            }
        }
        return islandCount;
    }
};

/**
Time complexity : O(N*M)
Space complexity : O(N*M)
**/