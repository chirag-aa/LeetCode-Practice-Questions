class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n=arr.size();
        
        if(n<3){
            return ans;
        }
        for(int i=0;i<n-2;i++){
            if(i==0 || (arr[i]!=arr[i-1])){
                
            
           int lo=i+1;
           int hi=n-1;
            
            while(lo<hi){
                
                if(arr[i]+arr[lo]+arr[hi]==0){
                    vector<int>temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[lo]);
                    temp.push_back(arr[hi]);
                    ans.push_back(temp);
                      while(lo<hi && arr[lo]==arr[lo+1]){
                        lo++;
                    }
                    while(lo<hi && arr[hi]==arr[hi-1]){
                        hi--;
                    }
                    lo++;
                    hi--;
                  
                }
                else if(arr[i]+arr[lo]+arr[hi]<0){
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