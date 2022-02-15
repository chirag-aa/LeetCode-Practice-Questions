class Solution {
public:
    bool checkSum(vector<int>& nums,int idx,int target,int n,vector<vector<bool>>& dp){
        if(idx==n && target==0){
            return true;
        }
        if(idx==n && target!=0){
            return false;
        }
        if(target==0){
            return true;
        }
        if(target<0){
            return false;
        }
     //   string makekey= to_string(idx)+"_"+to_string(target);
      //  if(mpp.find(makekey)!=mpp.end()){
        //    return mpp[makekey];
        //}
        if(dp[idx][target]!=false){
            cout<<"DP array me aaya call";
            return dp[idx][target];
        }
        
        bool ansl=false;
        
        if(target-nums[idx]>=0){
            ansl=checkSum(nums,idx+1,target-nums[idx],n,dp);
        }
        
        bool ansr=checkSum(nums,idx+1,target,n,dp);
        
        return dp[idx][target]=ansr || ansl;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int idx=0;
        bool ans=false;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
       // unordered_map<string,int>mpp;
        vector<vector<bool>>dp(n+1,vector<bool>((sum/2)+1,false));
        for(int i=0;i<=n;i++){
            
            for(int j=0;j<=sum/2;j++){
                if(i==0){
                    dp[i][j]=false;
                }
                if(j==0){
                    dp[i][j]=true;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum/2;j++){
                bool ans1=false;
                bool ans2=false;
                if(j-nums[i-1]>=0){
                    ans1=dp[i-1][j-nums[i-1]];
                }
                ans2=dp[i-1][j];
                
                dp[i][j]=ans1 || ans2;
            }
        }
        return dp[n][sum/2];
        //ans=checkSum(nums,idx,sum/2,n,dp);
        //return ans;
    }
};