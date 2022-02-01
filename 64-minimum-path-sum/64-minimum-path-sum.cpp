class Solution {
public:
    int CalPath(vector<vector<int>>& grid,vector<vector<int>>& dp,int m,int n,int row,int col){
        if(row>=m || col>=n || col<0 || row<0){
            return 0;
        }
        if(row==m-1 && col==n-1){
            return grid[row][col];
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int ansr=INT_MAX;
        if(col+1<n){
            ansr=CalPath(grid,dp,m,n,row,col+1)+grid[row][col];
        }
        int ansd=INT_MAX;
        if(row+1<m){
            ansd=CalPath(grid,dp,m,n,row+1,col)+grid[row][col];
        }
        return dp[row][col]=min(ansd,ansr);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int row=0;
        int col=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=CalPath(grid,dp,m,n,row,col);
        return ans;
    }
};