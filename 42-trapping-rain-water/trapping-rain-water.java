class Solution {
    public int trap(int[] arr) {
        int n = arr.length;
        int ans = 0;
        for(int i=0;i<n;i++){
          
          int maxToLeft = arr[i];
          int maxToRight = arr[i];

          for(int j=i-1;j>=0;j--){
            maxToLeft = Math.max(maxToLeft,arr[j]);
          }

           for(int j=i+1;j<n;j++){
            maxToRight = Math.max(maxToRight,arr[j]);
          }
          int waterThatCanBeStored = Math.min(maxToRight,maxToLeft) - arr[i];
          ans = ans + waterThatCanBeStored;
        }
        return ans;
    }
}