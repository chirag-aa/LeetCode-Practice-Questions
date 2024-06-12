class Pair {
    int freq;
    int num;

    public Pair(int freq,int num){
        this.freq = freq;
        this.num = num;
    }
    int getFreq(){
        return this.freq;
    }
    int getNum(){
        return this.num;
    }
}
class Solution {
    public int[] topKFrequent(int[] nums, int k) {
       HashMap<Integer,Integer>mpp = new HashMap<>();
       int n = nums.length;

       for(int i=0;i<n;i++){
        mpp.put(nums[i],mpp.getOrDefault(nums[i],0)+1);
       }

       PriorityQueue<Pair> pq = new PriorityQueue<>((a,b)->(a.getFreq()-b.getFreq()));

       for(Map.Entry<Integer,Integer>itr:mpp.entrySet()){

           Pair p1 = new Pair(itr.getValue(),itr.getKey());
           pq.add(p1);

           if(pq.size()>k){
             pq.poll();
           }

       }
       int []arr = new int[pq.size()];
       int temp = 0;
       while(!pq.isEmpty()){
         arr[temp] = pq.poll().getNum();
         temp++;
       }
       return arr;
    }
}