class Solution {
public:
    int maxArea(vector<vector<char>>& matrix, int n,int m,int row,int col,vector<vector<int>>& dp){
        if(row>=n || col>=m  || matrix[row][col]=='0'){
            return 0;
        }
        if(dp[row][col]!=-1){
            return dp[row][col];
        }
        int right=maxArea(matrix,n,m,row,col+1,dp);
        int down=maxArea(matrix,n,m,row+1,col,dp);
        int dia=maxArea(matrix,n,m,row+1,col+1,dp);
        
        return dp[row][col]=min(right,min(down,dia))+1;
        
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int temp=0;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                      int ans=maxArea(matrix,n,m,i,j,dp);
                     
                     temp= max(ans,temp);
                }
               
            }
        }
        return temp*temp;   
    }
};