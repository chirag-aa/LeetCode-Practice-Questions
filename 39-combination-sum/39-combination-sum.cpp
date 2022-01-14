class Solution {
public:
    void findSum(vector<vector<int>>& ans,vector<int>& arr,vector<int>temp,int target,int toAchive, int idx){
        if(idx==arr.size() || toAchive>target){
            return;
        }
        if(toAchive==target){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[idx]);
        findSum(ans,arr,temp,target,toAchive+arr[idx],idx);
        temp.pop_back();
        findSum(ans,arr,temp,target,toAchive,idx+1);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        if(arr.size()==0){
            return ans;
        }
        
        int idx=0;
        int toAchive=0;
        vector<int>temp;
        findSum(ans,arr,temp,target,toAchive,idx);
        return ans;
    }
};