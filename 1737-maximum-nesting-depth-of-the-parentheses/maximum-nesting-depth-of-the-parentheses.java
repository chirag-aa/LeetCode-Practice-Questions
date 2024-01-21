class Solution {
    public int maxDepth(String s) {
        int n = s.length();
        int maxDepth = 0;
        int openCount = 0;
        for(int i=0;i<n;i++) {
            if(s.charAt(i)=='(') {
                openCount++;
                maxDepth = Math.max(maxDepth,openCount);
            }
            else if(s.charAt(i)==')') {
                openCount--;
            }
        }
        return maxDepth;
    }
}