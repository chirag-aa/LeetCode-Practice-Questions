class Solution {
public:
    int countPaths(vector<vector<int>>& grid,vector<vector<int>>& dp,int row,int col,int m,int n){
        if(row>=m || col>=n || row<0 || col<0 || grid[row][col]==1){
            return 0;
        }
        if(row==m-1 && col==n-1){
            return 1;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int ansr=countPaths(grid,dp,row,col+1,m,n);
        
        int ansd=countPaths(grid,dp,row+1,col,m,n);
        return dp[row][col]=ansr+ansd;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        cout<<m<<n<<endl;
        int row=0;
        int col=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int ans=countPaths(grid,dp,row,col,m,n);
        return ans;
        
    }
};