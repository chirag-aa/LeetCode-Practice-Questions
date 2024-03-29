// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    // int maxProfit(int w,int wt[],int val[],int n,int idx,unordered_map<string,int>& mpp){
    //     if(idx==n || w<=0){
    //         return 0;
    //     }
    //     string makeKey= to_string(idx)+ "_" +to_string(w);
    //     if(mpp.find(makeKey)!=mpp.end()){
    //         return mpp[makeKey];
    //     }
    //     int include=INT_MIN;
        
    //     if(w-wt[idx]>=0){
    //         include=maxProfit(w-wt[idx],wt,val,n,idx+1,mpp)+val[idx];
    //     }
    //     int notInclude=maxProfit(w,wt,val,n,idx+1,mpp)+0;
        
    //     return mpp[makeKey]=max(include,notInclude);
    // }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        int idx=0;
     //   unordered_map<string,int>mpp;
      //  int ans=maxProfit(w,wt,val,n,idx,mpp);
        vector<vector<int>>dp(n+1,vector<int>(w+1,0));
        for(int i=1;i<=n;i++){
              int include=0;
                int notinclude=0;
            for(int j=1;j<=w;j++){
              
                if(j-wt[i-1]>=0){
                    include= val[i-1]+ dp[i-1][j-wt[i-1]];
                }
                
                    notinclude=0+ dp[i-1][j];
                
                dp[i][j]=max(include,notinclude);
            }
        }
        return dp[n][w];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends