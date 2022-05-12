class Solution {
public:
//     int maxPoints(vector<int>& cardPoints, int k,int n,int start,int end){
//         if(k<=0){
//             return 0;
//         }
//         int ansl=cardPoints[start] + maxPoints(cardPoints,k-1,n,start+1,end);
//         int ansr=cardPoints[end] + maxPoints(cardPoints,k-1,n,start,end-1);
        
//         return max(ansl,ansr);
//     }
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
//         int start=0;
//         int end=n-1;
        
//         int ans=maxPoints(cardPoints,k,n,start,end);
        int leftSum=0;
        int rightSum=0;
        int ans=0;
        for(int i=n-k;i<n;i++){
            rightSum+=cardPoints[i];
        }
        ans=max(ans,leftSum+rightSum);
        
        for(int i=0;i<k;i++){
            rightSum-=cardPoints[(n-k)+i];
            leftSum+= cardPoints[i];
            
            ans=max(ans,rightSum+leftSum);
        }
        
        return ans;
    }
};