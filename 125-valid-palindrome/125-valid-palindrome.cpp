class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
            if((s[i]>='a' && s[i]<='z' ) || (s[i]>='0' && s[i]<='9')){
                temp+=s[i];
            }
        }
        
        string reversetemp= temp; 
        reverse(reversetemp.begin(),reversetemp.end());
        
        if(reversetemp==temp){
            return true;
        }
        return false;
    }
};