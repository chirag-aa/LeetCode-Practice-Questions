class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n=str.size();
        string temp=str[0];
        string result="";
        bool flag=false;
        for(int i=0;i<temp.length();i++){
            
            for(int j=0;j<n;j++){
                string prefix=str[j];
                if(temp[i]==prefix[i]){
                   flag=true;
                }
                else{
                    flag = false;
                    return result;
                }
                
            }
            if(flag){
                result+=temp[i];
            }
        }
        return result;
    }
};