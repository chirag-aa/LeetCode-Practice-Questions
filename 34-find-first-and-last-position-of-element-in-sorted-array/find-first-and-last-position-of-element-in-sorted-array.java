class Solution {
    public int findFirstAccurance(int []nums,int target){
        int n = nums.length;

        int firstAcc = -1;
        int start=0;
        int end = n-1;

        while(start<=end){
          int mid = (start+end)/2;
          if(nums[mid]==target){
              firstAcc = mid;
              end = mid -1;
          }
          else if(nums[mid]<target){
              start = mid + 1;
          }
          else {
              end = mid - 1;
          }
        }
        return firstAcc;
    }
    public int findLastAccurance(int []nums,int target){
        int n = nums.length;

        int lastAcc = -1;
        int start=0;
        int end = n-1;

        while(start<=end){
          int mid = (start+end)/2;
          if(nums[mid]==target){
              lastAcc = mid;
              start = mid + 1;
          }
          else if(nums[mid]<target){
              start = mid + 1;
          }
          else {
              end = mid - 1;
          }
        }
        return lastAcc;
    }
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int ans[] = new int[2];
        ans[0] = -1;
        ans[1] = -1;

        ans[0] = findFirstAccurance(nums,target);
        ans[1] = findLastAccurance(nums,target);

        return ans;
    }
}