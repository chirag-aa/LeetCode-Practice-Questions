class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
         sort(nums.begin(),nums.end());
        
        ans= max(nums[n-1]*nums[n-2]*nums[n-3],nums[0]*nums[1]*nums[n-1]);
        return ans;
    }
};