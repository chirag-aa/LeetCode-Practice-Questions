class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min=INT_MAX;
        int ans=0;
        int profit=0;
        
        int n=arr.size();
    //     for(int i=0;i<n;i++){
    //         currProfit=0;
    //         for(int j=i+1;j<n;j++){
    //             profit=arr[j]-arr[i];
    //             currProfit=max(currProfit,profit);
    //         }
    //         if(currProfit>overallProfit)
    //         {
    //           overallProfit=currProfit;  
    //         }      
    //     }
    //     return overallProfit;
    // }
        
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            else{
                profit=arr[i]-min;
                ans=max(ans,profit);
            }
        }
        return ans;
    }
};