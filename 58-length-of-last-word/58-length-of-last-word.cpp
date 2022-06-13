class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int result = 0;
        int i=n-1;
        int j=0;
        
    
            
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i<0){
                return 0;
            }
            j=i-1;
            
            while(j>=0 && s[j]!=' '){
                j--;
            }
            
            result = i-j;
        return result;
        
    }
};