class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer>pq = new PriorityQueue<>();

        int n = nums.length;
        for(int i=0;i<n;i++){
           pq.add(nums[i]);
        }
        int temp = n-k;
        while(temp>0){
            temp--;
            pq.poll();
        }
        return pq.peek();
    }
}