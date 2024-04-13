class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int i = 0;
        int j = 0;
        int numberOfZeros = 0;
        int ans = 0;
        while(j<n){
            if(nums[j]==0){
                numberOfZeros++;
            }
           
            else if(numberOfZeros>k){
                while(numberOfZeros>k && i<j){
                    if(nums[i]==0){
                        numberOfZeros--;
                    }
                    i++;
                }
            }
             if(numberOfZeros<=k){
                ans = Math.max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
}