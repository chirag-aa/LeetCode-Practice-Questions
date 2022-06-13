class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        string result="";
        
        while(i<n){
            
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
            string temp = s.substr(i,j-i);
            if(result==""){
                result=temp;
            }
            else{
                result= temp + " " + result;
            }
            i=j+1;    
        }
        
    
        return result;
    }
};