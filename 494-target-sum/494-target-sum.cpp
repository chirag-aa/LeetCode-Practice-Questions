class Solution {
public:
    int targetSum(vector<int>& nums,int target,int idx,int n){
        if(idx==n && target!=0){
            return 0;
        }
        if(idx==n && target==0){
            return 1;
        }
        int add=targetSum(nums,target-nums[idx],idx+1,n);
        int sub=targetSum(nums,target+nums[idx],idx+1,n);
        
        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int idx=0;
        int ans= targetSum(nums,target,idx,n);
        return ans;
    }
};