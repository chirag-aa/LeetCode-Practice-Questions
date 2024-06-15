class Solution {
    public boolean isPossibleDivide(int[] hand, int groupSize) {
        int n = hand.length;
        int gs = groupSize;
        if(n%gs !=0){
            return false;
        }
        Arrays.sort(hand);
        HashMap<Integer,Integer>mpp = new HashMap<>();
        for(int i=0;i<n;i++){
            mpp.put(hand[i],mpp.getOrDefault(hand[i],0)+1);
        }

        for(int i=0;i<n;i++){
            List<Integer>arr = new ArrayList<>();
            if(mpp.containsKey(hand[i])){
                arr.add(hand[i]);
                mpp.put(hand[i],mpp.get(hand[i])-1);

                if(mpp.get(hand[i])<=0){
                    mpp.remove(hand[i]);
                }
            
            int temp = arr.get(0);
            while(mpp.containsKey(temp+1) && arr.size()<gs){
                mpp.put(temp+1,mpp.get(temp+1)-1);
                if(mpp.get(temp+1)<=0){
                    mpp.remove(temp+1);
                }
                arr.add(temp+1);
                temp = temp +1;
            }
            if(arr.size()<gs){
                return false;
            }
         }
        }
        if(mpp.size()<=0){
            return true;
        }
        return false;
    }
}