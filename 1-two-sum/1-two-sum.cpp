class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        
        unordered_map<int,int>mpp;
        
        for(int i=0;i<nums.size();i++){
            int numToFind= target-nums[i];
            
            if(mpp.find(numToFind)!=mpp.end()){
                result.push_back(mpp[numToFind]);
                result.push_back(i);
                return result;
            }
            else{
                mpp[nums[i]]=i;
            }
        }
        return result;
        
    }
};