class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
         int ans=0;
        // for(int i=0;i<n;i++){
        //     int temp=k;
        //     for(int j=i;j<n;j++){
        //         if(nums[j]==0 && temp<=k && temp>0){
        //             temp--;
        //             ans=max(ans,j-i+1);
        //         }
        //         else if(nums[j]==1){
        //             ans=max(ans,j-i+1);
        //         }
        //         else{
        //             break;
        //         }
        //     }
        // }
          int release=0;
          int zero_cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero_cnt++;
            }
            if(zero_cnt>k){
                while(zero_cnt>k && i>=release){
                    if(nums[release]==0){
                        zero_cnt--;
                        release++;
                    }
                    else{
                        release++;
                    }
                }
            }
            ans=max(ans,i-release+1);
        }
        return ans;
    }
};