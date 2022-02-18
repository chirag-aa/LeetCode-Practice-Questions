class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int dp[n+1][amount+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
                if(i==0){
                    dp[i][j]= 10000;
                }
                if(j==0){
                    dp[i][j]=0;
                }
            }
        }
        
            for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                int take= 10000;
                if(j-coins[i-1]>=0){
                    take=dp[i][j-coins[i-1]]+1;
                }
                int notTake=dp[i-1][j];
                dp[i][j]=min(take,notTake);
            }
        }
        if(dp[n][amount]==10000){
            return -1;
        }
        return dp[n][amount];
    }
};