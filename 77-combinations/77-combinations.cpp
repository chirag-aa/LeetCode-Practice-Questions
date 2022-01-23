class Solution {
public:
    
    void combinations(vector<vector<int>> &ans, vector<int> &temp,int idx,int n,int k){
        if(k==0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<=n;i++){
            temp.push_back(i);
            combinations(ans,temp,i+1,n,k-1);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        int idx=1;
        vector<int>temp;
        combinations(ans,temp,idx,n,k);
        return ans;
    }
};