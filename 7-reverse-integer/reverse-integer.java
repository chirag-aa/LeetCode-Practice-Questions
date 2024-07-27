class Solution {
    public int reverse(int x) {
        boolean isNegative = false;
        if(x<0){
            isNegative = true;
        }
        int n = Math.abs(x);
        long ans = 0;
        while(n>0){
            int ld = n%10;
            System.out.println(ld);
             n=n/10;
            ans = ans*10 + ld;
            System.out.println(ans);
        }
        if(ans>Integer.MAX_VALUE || ans<Integer.MIN_VALUE){
            return 0;
        }
        if(isNegative ==true){
            ans =  -1*ans;
        }
        return (int)ans;
    }
}