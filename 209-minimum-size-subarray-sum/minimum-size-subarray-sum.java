class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;
        int sum = 0;
        int ans = Integer.MAX_VALUE;
        int i = 0;
        int j = 0;

        while(j<n){
            sum = sum + nums[j];

            while(sum>=target && i<=j){
             ans = Math.min(ans,j-i+1);
             sum = sum - nums[i];
             i++;
            }
            j++;
        }
        if(ans == Integer.MAX_VALUE){
            return 0;
        }
        return ans;
    }
}