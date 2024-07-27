class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x>=0 && x<=9){
            return true;
        }
        else{
           long newnum=0;
            int temp=x;
            while(temp>0){
                int ld=temp%10;
                newnum=newnum*10 + ld;
                temp=temp/10;
            }
            if(newnum==x){
                return true;
            }
        }
        return false;
    }
}