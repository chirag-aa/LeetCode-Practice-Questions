class Solution {
    public int scoreOfString(String s) {
        int n = s.length();
        int i = 0;
        int j = 1;
        int ans = 0;
        while(j<n){
          ans = ans + Math.abs(s.charAt(i)-s.charAt(j));
          j++;
          i++;
        }
        return ans;
    }
}