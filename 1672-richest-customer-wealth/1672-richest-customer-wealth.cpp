class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum=0;
            for(int j=0;j<arr[i].size();j++){
                sum=sum+arr[i][j];
                
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};