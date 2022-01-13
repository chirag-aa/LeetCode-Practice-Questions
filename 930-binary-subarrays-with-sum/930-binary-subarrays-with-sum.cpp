class Solution {
public:
    int atmostK(vector<int>& nums,int k){
        int ans=0;
        int n=nums.size();
        int release=0;
        int count_ones=0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]==1){
                count_ones++;
            }
            
            if(count_ones>k){
                while(count_ones>k){
                     if(nums[release]==1){
                    count_ones--;
                    release++;
                    }
                   else{
                    release++;
                   }
                }  
            }
            ans=ans+(i-release+1);
        }
        return ans;
    }
    
    int numSubarraysWithSum(vector<int>& nums, int k) {
        if(k==0){
            return atmostK(nums,k);
        }
           return atmostK(nums,k) - atmostK(nums,k-1);
        }
};