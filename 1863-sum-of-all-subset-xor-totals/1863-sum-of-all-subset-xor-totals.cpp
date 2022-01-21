class Solution {
public:
    void makeSubsets(vector<int>& nums,vector<int>& v, int idx,int &sum){
        if(idx==nums.size()){
            int ans=0;
            for(int j=0;j<v.size();j++){
                ans=ans^v[j];
            }
            sum=sum+ans;
            return;
        }
        v.push_back(nums[idx]);
        makeSubsets(nums,v,idx+1,sum);
        v.pop_back();
        makeSubsets(nums,v,idx+1,sum);
        return;
    }
    int subsetXORSum(vector<int>& nums) {
        int size=nums.size();
        
        int idx=0;
        int sum=0;
        vector<int>v;
        
        makeSubsets(nums,v,idx,sum);
        return sum;
    }
};