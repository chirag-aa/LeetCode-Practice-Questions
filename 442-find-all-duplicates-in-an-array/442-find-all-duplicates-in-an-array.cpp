class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
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
        return result;
    }
};