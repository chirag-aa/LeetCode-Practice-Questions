// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
void tracePath(vector<vector<int>>& m, vector<string> &ans,string str,int n,int row,int col){
         if(row<0 || col<0 || row>=n || col>=n || m[row][col]==0){
             return;
         }
         
         if(row==n-1 && col==n-1){
             ans.push_back(str);
             return;
         }
         
         m[row][col]=0;
         tracePath(m,ans,str+"D",n,row+1,col);
         tracePath(m,ans,str+"L",n,row,col-1);
         tracePath(m,ans,str+"R",n,row,col+1);
         tracePath(m,ans,str+"U",n,row-1,col);
         m[row][col]=1;
         
         return;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        string str="";
        int row=0;
        int col=0;
        tracePath(m,ans,str,n,row,col);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends