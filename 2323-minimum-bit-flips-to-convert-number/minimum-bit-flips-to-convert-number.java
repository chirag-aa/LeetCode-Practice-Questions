class Solution {
    public int minBitFlips(int start, int goal) {
        int minBitsNeeded = start^goal;
        int count=0;
        while(minBitsNeeded>0){
            minBitsNeeded = minBitsNeeded & (minBitsNeeded-1);
            count++;
        }
        return count;
    }
}