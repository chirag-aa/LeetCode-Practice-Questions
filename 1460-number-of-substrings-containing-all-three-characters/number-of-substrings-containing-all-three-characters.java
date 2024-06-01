class Solution {
    public int findMinimum(int[] indexArr){
        int n = indexArr.length;
        int minElement = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            minElement = Math.min(minElement,indexArr[i]);
        }
        return minElement;
    }
    public int numberOfSubstrings(String s) {
        int n = s.length();
        int ans = 0;
        int indexArr[] = new int[3];
        for(int i=0;i<3;i++){
            indexArr[i] = -1;
        }
        for(int i=0;i<n;i++){
            indexArr[s.charAt(i)-'a'] = i;
            if(indexArr[0]==-1 || indexArr[1]==-1 || indexArr[2]==-1){
                continue;
            }
            else {
                int minimumIndex = findMinimum(indexArr);
                ans = ans + minimumIndex+1;
            }
        }
       return ans;
    }
}