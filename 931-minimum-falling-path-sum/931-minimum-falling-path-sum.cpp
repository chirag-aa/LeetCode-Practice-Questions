class Solution {
public:
    int minSum(vector<vector<int>>& matrix, int n,int row,int col, vector<vector<int>>& dp){
        if(row>=n || col>=n || row<0 || col<0){
            return 100000;
        }
        if(row==n-1){
            return matrix[row][col];
        }
        if(dp[row][col]!=100000){
            return dp[row][col];
        }
        int down=minSum(matrix,n,row+1,col,dp);
        int ld=minSum(matrix,n,row+1,col-1,dp);
        int rd=minSum(matrix,n,row+1,col+1,dp);
        
        return dp[row][col]=min(down,min(ld,rd))+matrix[row][col];
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int temp=INT_MAX;
        int count=0;
        int ans=INT_MAX;
        vector<vector<int>>dp(n+1,vector<int>(n+1,100000));
        for(int i=0;i<n;i++){
            count++;
             ans=minSum(matrix,n,0,i,dp); 
             temp= min(temp,ans);
        }
        return temp;
    }
};