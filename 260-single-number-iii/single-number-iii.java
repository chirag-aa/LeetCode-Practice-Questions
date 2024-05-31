class Solution {
    public int[] singleNumber(int[] nums) {
        int n = nums.length;
        int answer[] = new int[2];
        int temp = 0;
        for(int i=0;i<n;i++){
             boolean isNumberRepeated = false;
            for(int j=0;j<n;j++){
                if(i!=j && nums[i]==nums[j]){
                    isNumberRepeated = true;
                }
            }
            if(!isNumberRepeated){
                 answer[temp] = nums[i];
                 temp++;
            }
        }
        return answer;
    }
}