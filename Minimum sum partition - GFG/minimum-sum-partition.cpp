// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    
	    for(int i=0;i<n;i++){
	        sum=sum+arr[i];
	    }
	    
	    bool dp[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            if(i==0){
	                dp[i][j]=false;
	            }
	            if(j==0){
	                dp[i][j]=true;
	            }
	        }
	    }
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            bool include=false;
	            bool notInclude=false;
	            if(j-arr[i-1]>=0){
	                include= dp[i-1][j-arr[i-1]];
	            }
	            notInclude=dp[i-1][j];
	            dp[i][j]=include || notInclude;
	        }
	        
	    }
	    
	    vector<int>brr;
	    
	    for(int i=0;i<=sum/2;i++){
	        if(dp[n][i]==true){
	            brr.push_back(i);
	        }
	    }
	    
	    int ans=INT_MAX;
	    
	    for(int i=0;i<brr.size();i++){
	        ans=min(ans, sum-2*brr[i]);
	    }
	    
	    return ans;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends