class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int csum=0;
        int osum= nums[0];
        for(int i=0;i<n;i++){
            csum=csum+nums[i];
            if(csum>osum){
                osum=csum;
            }
            if(csum<0){
                csum=0;
            }
        }
        return osum;
    }
};