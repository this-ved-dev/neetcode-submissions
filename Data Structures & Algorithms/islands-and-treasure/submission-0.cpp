class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        
        if(grid.empty() || grid[0].empty())
        {
            return;
        }

        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int, int>> q;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }

            }
        }
        
        vector<pair<int, int>> directions = {{-1,0},{1,0},{0,1},{0,-1}};

        while(!q.empty())
        {
            auto [r,c]  = q.front(); 
            q.pop();

            int nrow, ncol;
            for(auto [drow, dcol] : directions)
            {
                nrow = r + drow;
                ncol = c + dcol;
            

                if(nrow<0 || ncol<0 || nrow>=row || ncol>=col || grid[nrow][ncol]!=2147483647 )
                {
                    continue;
                }

                grid[nrow][ncol] = grid[r][c]+1;
                q.push({nrow, ncol});
            }
        }
    }
};
