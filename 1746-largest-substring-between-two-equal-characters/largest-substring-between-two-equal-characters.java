class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int n = s.length();
        if(n<=1){
            return -1;
        }
        int len = 0;
        int ans = 0;
        boolean matchFound = false;
        
        for(int i=0;i<n-1;i++){

            for(int j=i+1;j<n;j++){
                if(s.charAt(i)==s.charAt(j)){
                    matchFound = true;
                    len = j - i -1;
                    ans = Math.max(len,ans);
                }
            }
        }
        if(matchFound==false){
            return -1;
        }
        return ans;
    }
}