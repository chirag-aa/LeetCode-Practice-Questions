class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int ans=0;
        unordered_map<int,int>mpp;
        int rel=0;
        int distinct_count=0;
        for(int i=0;i<n;i++){
           if(mpp.find(fruits[i])!=mpp.end()){
               mpp[fruits[i]]++;
           }
            else{
                mpp[fruits[i]]=1;
                distinct_count++;
            }   
                while(distinct_count>2 && rel<=i){
                    mpp[fruits[rel]]--;
                    if(mpp[fruits[rel]]==0){
                        mpp.erase(fruits[rel]);
                        distinct_count--;
                    }
                    rel++;
                }
            
            ans=max(ans,i-rel+1);
        }
        return ans;
    }
};