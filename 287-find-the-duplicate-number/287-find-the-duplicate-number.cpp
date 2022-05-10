class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         int slow=0;
//         int fast=0;
        
//         while(true){
//             slow=nums[slow];
//             fast=nums[nums[fast]];
            
//             if(slow==fast){
//                 break;
//             }
//         }
        
//         int newPtr=0;
        
//         while(newPtr!=fast){
//             newPtr=nums[newPtr];
//             fast=nums[fast];
//         }
        
//         return fast;
        vector<int>result;
        int n=nums.size();
        
        for(int i=1;i<=n;i++){
            int target= abs(nums[i-1])-1;
            
            int ans=nums[target];
            if(ans<0){
                result.push_back(abs(nums[i-1]));
            }
            else{
                nums[target]=nums[target] * (-1);
            }
        }
        return result[0];
    }
};