// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int maxProfit(int n,int w,int val[],int wt[],vector<vector<int>>& dp,int idx){
       if(w==0){
           return 0;
       }
       if(idx>=n){
           return 0;
       }
       if(dp[idx][w]!=-1){
           return dp[idx][w];
       }
       int include=0;
       if(w-wt[idx]>=0){
           include=maxProfit(n,w-wt[idx],val,wt,dp,idx)+val[idx];
       }
       int notInclude=0+maxProfit(n,w,val,wt,dp,idx+1);
       
       return dp[idx][w]=max(include,notInclude);
   }
    int knapSack(int n, int w, int val[], int wt[])
    {
       int idx=0;
       //vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
       int dp[n+1][w+1];
       for(int i=0;i<=n;i++){
           for(int j=0;j<=w;j++){
               dp[i][j]= 0;
           }
       }
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=w;j++){
               int include=0;
               if(j-wt[i-1]>=0){
                   include=val[i-1]+dp[i][j-wt[i-1]];
               }
               int notinclude=0+dp[i-1][j];
               dp[i][j]=max(include,notinclude);
           }
       }
       int ans=dp[n][w];
       return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends