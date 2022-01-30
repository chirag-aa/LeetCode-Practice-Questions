class Solution {
public:
    int helper(int m,int n,int row,int col, vector<vector<int>>& grid){
        if(col>=n || row>=m || row<0 || col<0){
            return 0;
        }
        if(row==m-1 && col==n-1){
            return 1;
        }
        if(grid[row][col]!=-1){
            return grid[row][col];
        }
        int ansr=helper(m,n,row,col+1,grid);
        int ansd=helper(m,n,row+1,col,grid);
        return grid[row][col]= ansr+ansd;
    }
    int uniquePaths(int m, int n) {
       int row=0;
        int col=0;
        vector<vector<int>>grid(m,vector<int>(n,-1));
        int ans=helper(m,n,row,col,grid);
        return ans;
    }
};