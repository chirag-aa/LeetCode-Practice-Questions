class Solution {
public:
//     int maxMoney(vector<int>& nums,int n,int idx,vector<int>& dp){
//         if(idx>=n){
//             return 0;
//         }
//         if(idx==n-1){
//             return nums[idx];
//         }
        
//         if(dp[idx]!=-1){
//             return dp[idx];
//         }
//         int ansl= nums[idx]+maxMoney(nums,n,idx+2,dp);
//         int ansr= 0+maxMoney(nums,n,idx+1,dp);
//         return dp[idx]=max(ansl,ansr);
//     }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // int ans=maxMoney(nums,n,0,dp);
        
        dp[n-1]=nums[n-1];
        int ans1=INT_MIN;
        int ans2=INT_MIN;
        for(int i=n-2;i>=0;i--){
            ans1=nums[i];
            if(i+2<n){
                ans1 =ans1+dp[i+2];
            }
            ans2=0+dp[i+1];
            
            dp[i]=max(ans1,ans2);
        }
        return dp[0];
        
    }
};