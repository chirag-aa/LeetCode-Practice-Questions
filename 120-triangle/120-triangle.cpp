class Solution {
public:
    int pathSum(vector<vector<int>>& triangle, int size,int row,int col,vector<vector<int>>& dp){
         if(row>=size){
            return 0;
        }
        if(row==size-1){
            return triangle[row][col];
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int ansi=pathSum(triangle,size,row+1,col,dp)+triangle[row][col];
        int ansi_1=pathSum(triangle,size,row+1,col+1,dp)+triangle[row][col];
        
        return dp[row][col]=min(ansi,ansi_1);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        int row=0;
        int col=0;
        vector<vector<int>>dp(size, vector<int>(300,-1));
        int ans=pathSum(triangle,size,row,col,dp);
        return ans;
    }
};