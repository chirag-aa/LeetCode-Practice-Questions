class Solution {
public:
    int longestSubstring(string s, int k) {
        int len=s.length();
        int ans=0;
        bool flag=false;
        for(int i=0;i<len;i++){
           unordered_map<char,int>mpp;
           for(int j=i;j<len;j++){
               mpp[s[j]]++;
               for(auto &it:mpp){
                   if(it.second<k){
                       flag=false;
                       break;
                   }
                   else{
                       flag=true;
                   }
               }
               if(flag==true){
                   ans=max(ans,j-i+1);
               }
           } 
        }
        return ans;
    }
 
};