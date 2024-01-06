class Solution {
    public int findMin(int[] bloomDay){
        int n = bloomDay.length;
        int min = 999999999;

        for(int i=0;i<n;i++){
            min  = Math.min(min,bloomDay[i]);
        }
        return min;
    }
    public int findMax(int[] bloomDay){
        int n = bloomDay.length;
        int max = 0;
        for(int i=0;i<n;i++){
            max = Math.max(max,bloomDay[i]);
        }
        return max;
    } 
    public int find(int[]bloomDay,int day,int m,int k) {
       int n = bloomDay.length;
       int bloomedFlowers = 0;
       int boquetThatCanBeFormed = 0;
       for(int i=0;i<n;i++){
           if(bloomDay[i]<=day){
               bloomedFlowers++;
           }
           else {
               boquetThatCanBeFormed +=  bloomedFlowers/k;
               bloomedFlowers = 0;
           }
       }
       boquetThatCanBeFormed +=  bloomedFlowers/k;
       return boquetThatCanBeFormed;
    }
    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if(n<m*k){
            return -1;
        }
        int minEle = findMin(bloomDay); 
        int maxEle = findMax(bloomDay);
        int ans = -1;
        int low = minEle;
        int high = maxEle;

        while(low<=high){
            int mid = (low + high)/2;
            int bouquetCanBeFormed = find(bloomDay,mid,m,k);
            if(bouquetCanBeFormed>=m){
                ans = mid;
                high= mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        
        return ans;
        
    }
}