class Solution {
    public int search(int[] nums, int target) {
        int n =nums.length;
        if(n<=0){
            return -1;
        }
        int ans = -1;

        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[low]){
                if(target<=nums[mid] && target>=nums[low]){
                    high = mid -1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
               if(target>=nums[mid] && target<=nums[high]){
                   low = mid + 1;
               }
               else {
                   high = mid -1;
               }
            }
        }
        return ans;
    }
}