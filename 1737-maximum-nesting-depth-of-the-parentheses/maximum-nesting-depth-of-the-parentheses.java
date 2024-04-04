class Solution {
    public int maxDepth(String s) {
        int n = s.length();
        int openBracketCount = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='(') {
                openBracketCount++;
                ans = Math.max(openBracketCount,ans);
            }
            else if(s.charAt(i)==')') {
              openBracketCount--;
            }
        }
        return ans;
    }
}