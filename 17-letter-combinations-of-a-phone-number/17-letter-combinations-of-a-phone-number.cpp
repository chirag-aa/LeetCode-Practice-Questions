class Solution {
public:
    void makeCombination(unordered_map<char,string>& mpp, string digits, vector<string>& v,string temp, int idx){
        if(idx==digits.length()){
            v.push_back(temp);
            return;
        }
        string fans=mpp[digits[idx]];
        for(int i=0;i<fans.length();i++){
            makeCombination(mpp,digits,v,temp+fans[i],idx+1);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
       vector<string>v;
        if(digits.length()==0){
            return v;
        }
        unordered_map<char,string>mpp;
        mpp['2']="abc";
        mpp['3']="def";
        mpp['4']="ghi";
        mpp['5']="jkl";
        mpp['6']="mno";
        mpp['7']="pqrs";
        mpp['8']="tuv";
        mpp['9']="wxyz";
        string temp="";
        int idx=0;
        makeCombination(mpp,digits,v,temp,idx);
        return v;
    }
};