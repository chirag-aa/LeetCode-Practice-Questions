class Solution {
    public int longestSubarray(int[] nums) {
        int n = nums.length;
        int zeroCount = 0;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j<n){
            if(nums[j]==0){
                zeroCount++;
            }
            if(zeroCount<=1){
              //  if(zeroCount == 0){
               //     ans = Math.max(ans,j-i+1);
              //  }
              //  else {
                    ans = Math.max(ans,j-i);
               // }
                j++;
            }
            else if(zeroCount>1){
                while(zeroCount>1){
                    if(nums[i]==0){
                        zeroCount--;
                    }
                    i++;
                }
                if(zeroCount<=1){
                //  if(zeroCount == 0){
                 //   ans = Math.max(ans,j-i+1);
                //  }
                 // else {
                    ans = Math.max(ans,j-i);
                 // }
               }
            j++;
            }
        }
        return ans;
    }
}