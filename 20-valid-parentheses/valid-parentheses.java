class Solution {
    public boolean isValid(String s) {
        int n = s.length();
        Stack<Character>s1=new Stack<>();

        for(int i=0;i<n;i++){
            if(s.charAt(i)=='(' || s.charAt(i)=='[' || s.charAt(i)=='{'){
                s1.push(s.charAt(i));
            }
            else if(!s1.isEmpty() && s.charAt(i)==')' && s1.peek()=='('){
                s1.pop();
            }
             else if(!s1.isEmpty() && s.charAt(i)==']' && s1.peek()=='['){
                s1.pop();
            }
             else if(!s1.isEmpty() && s.charAt(i)=='}' && s1.peek()=='{'){
                s1.pop();
            }
            else {
                return false;
            }
        }
        if(s1.isEmpty()){
            return true;
        }
        return false;
    }
}