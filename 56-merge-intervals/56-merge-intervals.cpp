class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>ans;
        int first=intervals[0][0];
        int second=intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            int tempFirst=intervals[i][0];
            int tempSecond=intervals[i][1];
               if(second>=tempFirst && tempSecond<=second){
                continue;
              }
            else if(second>=tempFirst && tempSecond>=second){
                second=tempSecond;
            }

            else{
                vector<int>temp={first,second};
                ans.push_back(temp);
                first=tempFirst;
                second=tempSecond;
            }
        }
        vector<int>temp={first,second};
        ans.push_back(temp);
        
        return ans;
    }
};