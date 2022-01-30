class Solution {
public:
    // int helper(int m,int n,int row,int col, vector<vector<int>>& grid){
    //     if(col>=n || row>=m || row<0 || col<0){
    //         return 0;
    //     }
    //     if(row==m-1 && col==n-1){
    //         return 1;
    //     }
    //     if(grid[row][col]!=-1){
    //         return grid[row][col];
    //     }
    //     int ansr=helper(m,n,row,col+1,grid);
    //     int ansd=helper(m,n,row+1,col,grid);
    //     return grid[row][col]= ansr+ansd;
    // }
    int uniquePaths(int m, int n) {
       int row=0;
        int col=0;
        if(m==1 || n==1){
            return 1;
        }
        // vector<vector<int>>grid(m,vector<int>(n,-1));
        // int ans=helper(m,n,row,col,grid);
        int dp[m][n];
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                dp[row][col]=0;
            }
        }
        for(int row=0;row<m;row++){
            dp[row][n-1]=1;
        }
        for(int col=0;col<n;col++){
            dp[m-1][col]=1;
        }
        
        for(int row=m-2;row>=0;row--){
            
            for(int col=n-2;col>=0;col--){
                int ansr=dp[row][col+1];
                int ansd=dp[row+1][col];
                dp[row][col]=ansr+ansd;
            }
        }
        return dp[0][0];
    }
};