class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp="";
        int result=-1;
        
        for(int i=0;i<haystack.length();i++){
              temp="";
            for(int j=i;j<haystack.length();j++){
                temp= temp+haystack[j];
                if(temp.length()>needle.length()){
                    break;
                }
                else if(temp==needle){
                    result=i;
                    return result;
                }
            }
        }
        return result;
    }
};