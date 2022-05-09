class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        
        while(true){
            slow=nums[slow];
            fast=nums[nums[fast]];
            
            if(slow==fast){
                break;
            }
        }
        
        int newPtr=0;
        
        while(newPtr!=fast){
            newPtr=nums[newPtr];
            fast=nums[fast];
        }
        
        return fast;
    }
};