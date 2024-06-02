class Solution {
    public int longestBeautifulSubstring(String word) {
        int n = word.length();
        HashMap<Character,Integer>mpp = new HashMap<>();
        mpp.put(word.charAt(0),1);
        int i = 0;
        int j = 1;
        int ans = 0;
        while(j<n){
            if(mpp.containsKey(word.charAt(j))){
                mpp.put(word.charAt(j),mpp.get(word.charAt(j))+1);
            }
            else {
                mpp.put(word.charAt(j),1);
            }

            if(word.charAt(j)>=word.charAt(j-1)){
                if(mpp.size()==5){
                    ans = Math.max(ans,j-i+1);
                }
                j++;
            }
            else if(word.charAt(j)<word.charAt(j-1)){
                while(i<j){
                    mpp.put(word.charAt(i),mpp.get(word.charAt(i))-1);
                    if(mpp.get(word.charAt(i))<=0){
                        mpp.remove(word.charAt(i));
                    }
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
}