class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int numssize=nums.size();
        int product=1;
        int answer=0;
        int left=0;
        for(int r=0;r<numssize;r++){
          product=product*nums[r];
              while(product>=k && left<=r){
                  product=product/nums[left];
                  left++;
              }
          
          answer=answer+(r-left+1);  
        }
        return answer;
    }
};