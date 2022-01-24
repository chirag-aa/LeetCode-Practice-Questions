class Solution {
public:
    bool detectCapitalUse(string word) {
        int length=word.length();
        bool ans=false;
        for(int i=0;i<length;i++){
            if(word[i]>='A' && word[i]<='Z'){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
        if(ans==true){
            return true;
        }
        for(int i=0;i<length;i++){
            if(word[i]>='a' && word[i]<='z'){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
        if(ans==true){
            return true;
        }
        for(int i=1;i<length;i++){
            if(word[0]>='A' && word[0]<='Z'
                 && word[i]>='a' && word[i]<='z'){
                ans=true;
            }
                else{
                    ans=false;
                    break;
                }
            }
        if(ans==true){
            return true;
        }
        return ans;
    }
};