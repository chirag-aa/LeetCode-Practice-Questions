class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int n = cardPoints.length;
        int sum = 0;
        int maxPoints = 0;
        int m = k-1;
        for(int i=0;i<k;i++){
            sum = sum + cardPoints[i];
        }
        if(k==n){
            return sum;
        }
        maxPoints = Math.max(maxPoints,sum);

        for(int j=n-1;j>=n-k;j--){
           sum = sum-cardPoints[m];
           m--;
           sum = sum + cardPoints[j];
            maxPoints = Math.max(maxPoints,sum);
        }
        return maxPoints;
    }
}