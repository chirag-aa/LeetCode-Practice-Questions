class Solution {
    public int findPeakElement(int[] nums) {
        int n = nums.length;
        
        if(n<=0){
            return 0;
        }
        
        if(n==1){
            return 0;
        }

        int low = 1;
        int high = n-2;

        if(nums[n-1]>nums[n-2]){
            return n-1;
        }
        if(nums[0]>nums[1]){
            return 0;
        }

        while(low<=high){
            
            int mid = (low+high)/2;
             
             if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                 return mid;
             }

             if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                 low = mid + 1;
             }
             else {
                 high = mid -1;
             }
        }
        return 0;
        
    }
}