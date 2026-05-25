class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        if(grid.empty())
        {
            return 0;
        }

        int row = grid.size();
        int col = grid[0].size();
        int island_size = 0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    island_size = max(island_size, dfs(grid, i, j));
                }
                
            }
        }
        return island_size;
    }

    int dfs(vector<vector<int>>& grid, int r, int c)
    {
        int row = grid.size(); 
        int col = grid[0].size(); 

        if(r<0 || c<0 || r>=row || c>=col || grid[r][c]==0)
        {
            return 0;
        }
        
        grid[r][c]=0;

        return 1+dfs(grid, r+1, c)+dfs(grid, r-1,c)+dfs(grid, r, c+1)+dfs(grid, r, c-1);

        
    }
};
