class Solution {
public:
    void isMatch(string s,string t,string temp,bool& ans,int idxt,int idxs){
        if(idxt==t.length() || idxs==s.length()){
            if(temp==s){
                ans=true;
            }
            return;
        }
        if(s[idxs]==t[idxt]){
             isMatch(s,t,temp+t[idxt],ans,idxt+1,idxs+1);
        }
        else{
            isMatch(s,t,temp,ans,idxt+1,idxs);
        }
        return;
    }
    bool isSubsequence(string s, string t) {
        string temp="";
        bool ans=false;
        int idxt=0;
        int idxs=0;
        isMatch(s,t,temp,ans,idxt,idxs);
        return ans;
    }
};