// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
       int dp[n+1][n+1];
       for(int i=0;i<=n;i++){
           for(int j=0;j<=n;j++){
               dp[i][j]=0;
           }
       }
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
               int cut=0;
               if(j- (i)>=0){
                   cut=dp[i][j-(i)]+price[i-1];
               }
               int notCut= 0+dp[i-1][j];
               dp[i][j]=max(cut,notCut);
           }
       }
       return dp[n][n];
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends