class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
          if(n==1){
              return 1;
          }
          
        vector<int>trustedBy(n+1,0);
        vector<int>trustCount(n+1,0);
        
        for(int i=0;i<trust.size();i++){
            vector<int>temp=trust[i];
            trustCount[temp[0]]++;
            trustedBy[temp[1]]++;
        }
        
        for(int i=1;i<trustedBy.size();i++){
            if(trustedBy[i]==n-1 && trustCount[i]==0){
                return i;
            }
        }
        return -1;
    }
};