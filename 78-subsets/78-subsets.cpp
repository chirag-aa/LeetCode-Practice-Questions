class Solution {
public:
    void makeSubsets(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        makeSubsets(nums,temp,ans,i+1);
        temp.pop_back();
        makeSubsets(nums,temp,ans,i+1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()==0){
            return ans;
        }
        vector<int>temp;
        int i=0;
        makeSubsets(nums,temp,ans,i);
        return ans;
    }
};