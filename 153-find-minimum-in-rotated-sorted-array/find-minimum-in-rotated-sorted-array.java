class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        if(n<=0){
           return -1;
        }
        int minimumEle =  999999;

        int low = 0;
        int high = n-1;

        while(low<=high){
            
            int mid = (low + high )/2;
             
            if(nums[mid]>=nums[low]){
                int min = nums[low];
                minimumEle = Math.min(min,minimumEle);
                low = mid + 1;
            }
            else {
                int min = nums[mid];
                high = mid -1;
                minimumEle = Math.min(min,minimumEle);
            }
        }
        return minimumEle;
    }
    
}