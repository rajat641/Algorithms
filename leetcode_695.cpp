class Solution {
public:
    int level =0;
    int dfs(vector<vector<int>>& grid, int r, int c ,int i, int j){
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]!=1) return 0;
        grid[i][j] =2;
        level ++;
        
        int x = dfs(grid, r,c,i-1, j);
        int y = dfs(grid, r,c,i, j+1);
        int a =  dfs(grid, r,c,i+1, j);
        int z= dfs(grid, r,c,i, j-1);
        return level;
        
    }
    
    
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int r = grid.size();
        if(r==0) return 0;
        int c = grid[0].size();
        int ans = INT_MIN;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    ans = max(ans, dfs(grid, r,c,i ,j));
                    level =0;
                }
            }
        }
        if(ans==INT_MIN) return 0;
        return ans;
        
        
        
    }
};
