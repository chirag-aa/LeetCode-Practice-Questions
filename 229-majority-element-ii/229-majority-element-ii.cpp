class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int reqCount= floor(nums.size()/3);
        vector<int>result;
        unordered_map<int,int>mpp;
        set<int>s1;
        
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            
            if(mpp[nums[i]]>reqCount){
                if(s1.find(nums[i])==s1.end()){
                    s1.insert(nums[i]);
                    result.push_back(nums[i]);
                }
                
            }
        }
        return result;
    }
};