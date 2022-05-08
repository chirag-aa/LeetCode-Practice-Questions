class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[ans]=nums[i];
                ans++;
            }
        }
        
        for(int j=ans;j<n;j++){
            nums[j]=0;
        }
    }
};