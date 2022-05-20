class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
          if(n<4){
            return ans;
        }
        sort(nums.begin(),nums.end());
      
        
        for(int i=0;i<n-3;i++){
            if(i==0 || (nums[i]!=nums[i-1])){
                for(int j=i+1;j<n-2;j++){
                    if(j==i+1 || (nums[j]!=nums[j-1])){
                        int lo=j+1;
                        int hi=n-1;
                        
                        while(lo<hi){
                            int sum=nums[i]+nums[j];
                            if(sum==target-nums[lo]-nums[hi]){
                                vector<int>temp={nums[i],nums[j],nums[lo],nums[hi]};
                                ans.push_back(temp);
                                
                                while(lo<hi && nums[lo]==nums[lo+1]){
                                    lo++;
                                }
                                while(lo<hi && nums[hi]==nums[hi-1]){
                                    hi--;
                                }
                                
                                lo++;
                                hi--;
                            }
                            
                            else if(sum<target-nums[lo]-nums[hi]){
                                lo++;
                            }
                            else{
                                hi--;
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};