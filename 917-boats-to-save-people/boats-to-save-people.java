class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int n = people.length;
        Arrays.sort(people);
        int boatCount = 0;
        int left = 0;
        int right = n-1;
        while(left<=right){
            int sum = people[left]+people[right];
            if(sum<=limit){
                boatCount++;
                left++;
                right--;
            }
            else {
                boatCount++;
                right--;
            }
        }
        return boatCount;
    }
}