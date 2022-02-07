// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int helper(int w,int wt[],int val[],int n,int idx,vector<vector<int>>& dp){
        if(idx==n || w<=0){
            return 0;
        }
        if(dp[idx][w]!=-1){
            return dp[idx][w];
            cout<<"execur=ted";
        }
        int include=0;
        if(w-wt[idx]>=0){
            include=helper(w-wt[idx],wt,val,n,idx+1,dp)+val[idx];
        }
        int notinclude=helper(w,wt,val,n,idx+1,dp);
        return dp[idx][w]=max(include,notinclude);
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        int idx=0;
        int profit=0;
        vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
       int ans=helper(w,wt,val,n,idx,dp);
       return ans;
        
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