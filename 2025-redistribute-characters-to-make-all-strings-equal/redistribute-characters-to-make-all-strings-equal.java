// intution is keep the count of each char if the count is eqal to the size this means even distribution can be done else if it is zero this means even distibutions is not possible

class Solution {
    public boolean makeEqual(String[] words) {
        int n = words.length;
        boolean ans = true;

        if(n==1){
            return true;
        }
        int arr[]=new int[26];
         
        for(int i=0;i<n;i++){
            String temp = words[i];
            int len = temp.length();
            for(int j=0;j<len;j++){
                arr[temp.charAt(j)-'a']++;
            }
        }

        for(int i=0;i<26;i++){
            if(arr[i]%n!=0 && arr[i]!=0){
                return false;
            }
        }
        return ans;
    }
}