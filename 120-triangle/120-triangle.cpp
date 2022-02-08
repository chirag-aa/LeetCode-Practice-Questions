class Solution {
public:
//     int pathSum(vector<vector<int>>& triangle, int size,int row,int col,vector<vector<int>>& dp){
//          if(row>=size){
//             return 0;
//         }
//         if(row==size-1){
//             return triangle[row][col];
//         }
//         if(dp[row][col]!=-1){
//             return dp[row][col];
//         }
//         int ansi=pathSum(triangle,size,row+1,col,dp)+triangle[row][col];
//         int ansi_1=pathSum(triangle,size,row+1,col+1,dp)+triangle[row][col];
        
//         return dp[row][col]=min(ansi,ansi_1);
//     }
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        int row=0;
        int col=0;
        vector<vector<int>>dp(size, vector<int>(size+1,-1));
        // int ans=pathSum(triangle,size,row,col,dp);
        for(int i=0;i<size;i++){
            dp[size-1][i]=triangle[size-1][i];
        }
        for(int i=size-2;i>=0;i--){
            for(int j=0;j<i+1;j++){
                int ansi=dp[i+1][j]+triangle[i][j];
                int ansi_1=dp[i+1][j+1]+triangle[i][j];
                
                dp[i][j]=min(ansi,ansi_1);
            }
        }
        return dp[0][0];
    }
};