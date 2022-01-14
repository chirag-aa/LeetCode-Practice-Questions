// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    void makeSubsets(vector<int>& arr,vector<vector<int>> &ans,int i,vector<int> &temp){
        if(i==arr.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        makeSubsets(arr,ans,i+1,temp);
        temp.pop_back();
        makeSubsets(arr,ans,i+1,temp);
        return;
    }
    vector<vector<int>>subsets(vector<int>& arr)
    {
        vector<vector<int>>ans;
        if(arr.size()==0){
            return ans;
        }
        vector<int>temp;
        makeSubsets(arr,ans,0,temp);
        sort(ans.begin(),ans.end());
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
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends