class Solution {
public:
    int minCoins(vector<int>& coins, int amount, int idx,int n, vector<vector<int>>& dp){
        if(amount==0){
            return 0;
        }
        if(idx>=n){
            return INT_MAX;
        }
        if(dp[idx][amount]!=-1){
            return dp[idx][amount];
        }
        int include =10000;
        if(amount-coins[idx]>=0){
            include= minCoins(coins,amount-coins[idx],idx,n,dp)+1;
        }
        int notinclude=INT_MAX;
        notinclude=minCoins(coins,amount,idx+1,n,dp)+0;
        
        return dp[idx][amount]=min(include,notinclude);
    }
    int coinChange(vector<int>& coins, int amount) {
        int idx=0;
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int ans=minCoins(coins,amount,idx,n,dp);
        if(ans>=10000){
            return -1;
        }
        return ans;
    }
};