class Solution {
public:
    int targetSum(vector<int>& nums,int target,int idx,int n,unordered_map<string,int>& mpp){
        if(idx==n && target!=0){
            return 0;
        }
        if(idx==n && target==0){
            return 1;
        }
        string makeKey= to_string(idx)+ "_" + to_string(target);
        if(mpp.find(makeKey)!=mpp.end()){
            return mpp[makeKey];
        }
        int add=targetSum(nums,target-nums[idx],idx+1,n,mpp);
        int sub=targetSum(nums,target+nums[idx],idx+1,n,mpp);
        
        return mpp[makeKey]= add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=0;
        unordered_map<string,int>mpp;
        int ans= targetSum(nums,target,idx,n,mpp);
        return ans;
    }
};