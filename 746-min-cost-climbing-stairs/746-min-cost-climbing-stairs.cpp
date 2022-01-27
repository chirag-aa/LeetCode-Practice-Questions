class Solution {
public:
    int helper(int idx,int n,vector<int>& cost,vector<int>& dp){
       if(idx==n){
           return 0;
       }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int ansl=helper(idx+1,n,cost,dp)+cost[idx];
        int ansr=INT_MAX;
        if(idx+2<=n){
            ansr=helper(idx+2,n,cost,dp)+cost[idx];
        }
            return dp[idx]= min(ansl,ansr);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        int ans=helper(0,n,cost,dp);
        int fans=helper(1,n,cost,dp);
        return min(fans,ans);
    }
};