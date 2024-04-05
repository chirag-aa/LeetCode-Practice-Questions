class Solution {
   public boolean areTwoCharEqual(char a,char b) {

    if(a>b){
      if(a-32==b){
        return true;
      }
    }
    else if(a<b) {
        if(b-32==a){
            return true;
        }
    }
    return false;

   }
    public String makeGood(String s) {
        int n = s.length();
        Stack<Character>s1=new Stack<>();
        if(n<=1){
            return s;
        }

        String ans = "";
        for(int i=0;i<n;i++){

            if(s1.isEmpty()){
               s1.push(s.charAt(i));
               continue;
            }
            else if(areTwoCharEqual(s1.peek(),s.charAt(i))) {
                s1.pop();
            }
            else {
                s1.push(s.charAt(i));
            }
        }
        while(!s1.isEmpty()){
            ans = s1.peek() + ans;
            s1.pop();
        }
        return ans;
    }
}