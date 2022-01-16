class Solution {
public:
    void makeBalance(vector<string>& ans,int open,int close,string temp){
        if(open<=0 && close<=0){
            ans.push_back(temp);
            return;
        }
        if(open>0){
            makeBalance(ans,open-1,close,temp+ "(");
        }
        if(open==close){
            return;
        }
        if(close>0){
            makeBalance(ans,open,close-1,temp+")");
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=n;
        int close=n;
        string temp="";
        makeBalance(ans,open,close,temp);
        return ans;
    }
};