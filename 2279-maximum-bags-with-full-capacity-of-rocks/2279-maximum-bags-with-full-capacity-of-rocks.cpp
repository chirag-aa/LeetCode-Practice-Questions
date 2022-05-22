class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int>neededRocks;
        int result=0;
        for(int i=0;i<capacity.size();i++){
            neededRocks.push_back(capacity[i] - rocks[i]);
        }
        sort(neededRocks.begin(),neededRocks.end());
        
        for(int i=0;i<neededRocks.size();i++){
            if(neededRocks[i]==0){
                result++;
                continue;
            }
            if(additionalRocks>0 && neededRocks[i]<=additionalRocks){
                result++;
                additionalRocks=additionalRocks-neededRocks[i];
            }
        }
        return result;
    }
};