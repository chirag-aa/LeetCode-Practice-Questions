class Solution {
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        HashMap<Integer,Integer>mpp = new HashMap<>();
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j<n){
            if(mpp.containsKey(fruits[j])){
                mpp.put(fruits[j],mpp.get(fruits[j])+1);
            }
            else {
                mpp.put(fruits[j],1);
            }
            if(mpp.size()<=2){
                ans = Math.max(ans,j-i+1);
                j++;
            }
            else if(mpp.size()>2){
                while(mpp.size()>2 && i<=j){
                   mpp.put(fruits[i],mpp.get(fruits[i])-1);
                   if(mpp.get(fruits[i])<=0){
                    mpp.remove(fruits[i]);
                   }
                   i++;
                }
                if(mpp.size()<=2){
                     ans = Math.max(ans,j-i+1);
                }
                j++;
            }

        }
        return ans;
    }
}