class Solution {
    int findMaxFreq(int []freqArr){
        int n = freqArr.length;
        int ans = Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            if(freqArr[i]!=0){
              ans = Math.max(ans,freqArr[i]);
            }
            
        }
        return ans;
    }

      int findMinFreq(int []freqArr){
        int n = freqArr.length;
        int ans = Integer.MAX_VALUE;

        for(int i=0;i<n;i++){
            if(freqArr[i]!=0){
              ans = Math.min(ans,freqArr[i]);
            }
            
        }
        return ans;
    }
    public int beautySum(String s) {
        int n = s.length();
        int ans = 0;
        for(int i = 0;i<n;i++){
             int freqArr[] = new int[26];
            for(int j=i;j<n;j++) {
                freqArr[s.charAt(j)-'a']++;
                int maxFreq = findMaxFreq(freqArr);
                int minFreq = findMinFreq(freqArr);
                int beauty = maxFreq - minFreq;
                if(beauty>0){
                    ans = ans + beauty;
                }
            }
        }
        return ans;
    }
}