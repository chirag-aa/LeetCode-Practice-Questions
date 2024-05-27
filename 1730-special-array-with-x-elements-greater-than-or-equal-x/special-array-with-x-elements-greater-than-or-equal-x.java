class Solution {
    public int specialArray(int[] nums) {
        int n = nums.length;

        for(int i = 0;i<=n;i++){
            int countOfNumbers = 0;
            for(int j=0;j<n;j++){
              if(nums[j]>=i){
                countOfNumbers++;
              }
            }
            if(countOfNumbers == i){
                return i;
            }
        }
        return -1;
    }
}