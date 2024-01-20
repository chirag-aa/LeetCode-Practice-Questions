class Solution {
   public String makeString(char c,int acc) {
       String ans = "";
       while(acc>0){
           ans = ans + c;
           acc--;
       }
       return ans;
   }
    class Pair{
        public char ch;
        public int accurance;

        public Pair(char ch,int accurance){
            this.ch = ch;
            this.accurance = accurance;
        }
    }
    public String frequencySort(String s) {
        String ans = "";
        int []freqArr = new int[124];
        char []ch = s.toCharArray();
        int n = ch.length;
        for(int i=0;i<n;i++){
            freqArr[ch[i]]++;
        }
        ArrayList<Pair> mapping = new ArrayList<>();
        for(int i=48;i<124;i++){
            if(freqArr[i]>0){
               mapping.add(new Pair((char)i,freqArr[i]));
            }
        }

        Collections.sort(mapping,new Comparator<Pair>(){
           public int compare(Pair p1,Pair p2){
               return p2.accurance - p1.accurance;
           }
        });
        int len = mapping.size();
        for(int i=0;i<len;i++){
            Pair p = mapping.get(i);
            char c = p.ch;
            int acc = p.accurance;
            String temp = makeString(c,acc);
            ans = ans + temp;
        }
        return ans;
    }
}