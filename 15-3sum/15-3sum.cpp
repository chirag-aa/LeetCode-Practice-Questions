class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            if(i==0 || (i>0 && arr[i]!=arr[i-1])){
                int lo=i+1;
                int hi=n-1;
               int sum=0-arr[i];
                while(lo<hi){
                    if(arr[lo]+arr[hi]==sum){
                        vector<int>v;
                        v.push_back(arr[i]);
                        v.push_back(arr[lo]);
                        v.push_back(arr[hi]);
                        ans.push_back(v);
                        while(lo<hi && arr[lo]==arr[lo+1]){
                            lo++;
                        }
                        while(lo<hi && arr[hi]==arr[hi-1]){
                            hi--;
                        } 
                        hi--;
                        lo++;
                    }
                    else if(arr[lo]+arr[hi]<sum){
                        lo++;
                    }
                    else{
                        hi--;
                    }
                }
            }
        }
        
        return ans;
    }
};