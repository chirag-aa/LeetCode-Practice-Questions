class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mpp;
        char ans;
        for(int i=0;i<t.length();i++){
            mpp[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mpp.find(s[i])!=mpp.end()){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
            }
        }
        for(auto &it:mpp){
             ans=it.first;
        }
        return ans;
    }
};