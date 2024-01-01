class Solution {
    public int findContentChildren(int[] g, int[] s) {
        
        int g1 = g.length;
        int s1 = s.length;

        Arrays.sort(g);
        Arrays.sort(s);

        int i = 0;
        int j = 0;
        int count=0;

        while(i<g1 && j<s1){
            if(s[j]>=g[i]){
                j++;
                i++;
                count++;
            }
            else {
                j++;
            }

        }
        return count;

    }
}