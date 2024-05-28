class Solution {
    public long subArrayRanges(int[] nums) {
        int n = nums.length;
        long sum = 0;
        for(int i=0;i<n;i++){
            int maxEle = nums[i];
            int minEle = nums[i];
            for(int j=i;j<n;j++){
                maxEle = Math.max(maxEle,nums[j]);
                minEle = Math.min(minEle,nums[j]);
                sum = sum + (maxEle - minEle);
            }
        }
        return sum;
    }
}