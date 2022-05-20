class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cgap=0;
        int ovgap=INT_MAX;
        int ans=0;
        
        for(int i=0;i<n-2;i++){
            
            int lo=i+1;
            int hi=n-1;
            
            while(lo<hi){
                
                int sum= nums[i]+nums[lo]+nums[hi];
                cgap=abs(target-sum);
                
                if(cgap<ovgap){
                    ovgap=cgap;
                    ans=sum;
                }
                
                if(sum<target){
                    lo++;
                
                }
                else{
                    hi--;
                }
            }
        }
        return ans;
    }
};