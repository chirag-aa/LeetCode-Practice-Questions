class Solution {
    public int maxFreqElement(int []freqArr){
        int n = freqArr.length;
        int maxElement = 0;
        for(int i=0;i<n;i++){
            maxElement = Math.max(maxElement,freqArr[i]);
        }
        return maxElement;
    }
    public int characterReplacement(String s, int k) {
        int n = s.length();
        int freqArr[]=new int[26];
        int i = 0;
        int j = 0;
        int ans = 0;

        while(j<n){
           freqArr[s.charAt(j)-'A']++;

           while(j-i+1 - maxFreqElement(freqArr) > k){
             freqArr[s.charAt(i)-'A']--;
             i++;
           }
           if(j-i+1 - maxFreqElement(freqArr)<=k){
            ans = Math.max(ans,j-i+1);
           }
           j++;
        }
        return ans;
    }
}