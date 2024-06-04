class Solution {
    public int longestPalindrome(String s) {
        int n = s.length();
        HashMap<Character,Integer>mpp = new HashMap<>();
        int len = 0;
        boolean oddValueFound = false;
        for(int i=0;i<n;i++){
            if(mpp.containsKey(s.charAt(i))){
                mpp.put(s.charAt(i),mpp.get(s.charAt(i))+1);
            }
            else {
                mpp.put(s.charAt(i),1);
            }
        }
        for(Map.Entry<Character,Integer>itr : mpp.entrySet()){
            if(itr.getValue()%2 == 0){
                len = len + itr.getValue();
            }
            else {
                len = len + (itr.getValue()-1);
                oddValueFound = true;
            }
        }
        if(oddValueFound == true){
            len = len + 1;
        }
        return len;
    }
}