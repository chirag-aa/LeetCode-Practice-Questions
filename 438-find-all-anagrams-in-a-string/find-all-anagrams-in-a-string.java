class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        List<Integer>answer = new ArrayList<>();
        int sLen = s.length();
        int pLen = p.length();
        HashMap<Character,Integer>pMpp = new HashMap<>();
        HashMap<Character,Integer>sMpp = new HashMap<>();
        for(int i=0;i<pLen;i++){
            if(pMpp.containsKey(p.charAt(i))){
                pMpp.put(p.charAt(i),pMpp.get(p.charAt(i))+1);
            }
            else {
                pMpp.put(p.charAt(i),1);
            }
        }
        int windowSize = pLen;
        int i = 0;
        int j = 0;

        while(j<sLen){
          if(sMpp.containsKey(s.charAt(j))){
            sMpp.put(s.charAt(j),sMpp.get(s.charAt(j))+1);
          }
          else {
            sMpp.put(s.charAt(j),1);
          }

          if(j-i+1<windowSize){
            j++;
          }
          else if(j-i+1 == windowSize){
            if(sMpp.size()==pMpp.size()){
                if(sMpp.equals(pMpp)){
                    answer.add(i);
                }
            }
            if(sMpp.containsKey(s.charAt(i))){
                sMpp.put(s.charAt(i),sMpp.get(s.charAt(i))-1);
                if(sMpp.get(s.charAt(i))<=0){
                    sMpp.remove(s.charAt(i));
                }
            }
            i++;
            j++;
          }
        }
        return answer;
    }
}