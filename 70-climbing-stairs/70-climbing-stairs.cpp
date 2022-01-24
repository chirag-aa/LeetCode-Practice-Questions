class Solution {
public:
    int ways(int n,int k,vector<int>& dp){
        
	        if(n<k){
	            return 0;
	        }
        
	        if(n==k){
	            return 1;
	        }
        
            if(dp[k]!=-1){
            return dp[k];
            }
        
	        dp[k]=ways(n,k+1,dp)+ways(n,k+2,dp);
	        return dp[k];
	    }
    
    int climbStairs(int n) {
        int k=0;
		    int ans=0;
            vector<int>dp(n+1,-1);
		    ans=ways(n,k,dp);
		    return ans;
    }
};