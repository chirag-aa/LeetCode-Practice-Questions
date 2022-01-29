class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>dpf(n,0);
        vector<int>dpl(n,0);
        int j=0;
        dpf[0]=nums[0];
        dpl[j]=nums[1];
        int ansl=INT_MIN;
        int ansll=INT_MIN;
        int ansr=INT_MIN;
        int ansrr=INT_MIN;
        for(int i=1;i<n-1;i++){
            
            ansl=nums[i];
            if(i-2>=0){
                ansl=ansl+dpf[i-2];
            }
            ansr=0+dpf[i-1];
            dpf[i]=max(ansl,ansr);
        }
        
        for(int i=2;i<n;i++){
            j++;
            ansll=nums[i];
            if(j-2>=0){
                ansll=ansll+dpl[j-2];
            }
            ansrr=0+dpl[j-1];
            dpl[j]=max(ansll,ansrr);
        }
        return max(dpf[n-2],dpl[n-2]);
    }
};