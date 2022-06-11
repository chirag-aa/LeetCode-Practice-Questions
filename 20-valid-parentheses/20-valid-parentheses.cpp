class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n==1){
            return false;
        }
        
        stack<char>s1;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
            }
            
            else if(s[i]==')'){
                if(!s1.empty() && s1.top()=='('){
                    s1.pop();
                }
                else{
                    return false;
                }
                
            }
            
               else if(s[i]=='}'){
                if( !s1.empty() && s1.top()=='{'){
                    s1.pop();
                }
                else{
                    return false;
                }
                
            }
               else if(s[i]==']'){
                if(!s1.empty() && s1.top()=='['){
                    s1.pop();
                }
                else{
                    return false;
                } 
            }
        }
        if(s1.empty()){
            return true;
        }
        else{
            return false;
        }
        
//         for(int i=0;i<n;i++){
//             if(s[i]=='('){
//                 if(s[i+1]!=')'){
//                     return false;
//                 }
//                 else{
//                     i++;
//                 }
//             }
            
//               else if(s[i]=='{'){
//                 if(s[i+1]!='}'){
//                     return false;
//                 }
//                 else{
//                     i++;
//                 }
//             }
            
//              else if(s[i]=='['){
//                 if(s[i+1]!=']'){
//                     return false;
//                 }
//                 else{
//                     i++;
//                 }
//             }
            
//             else{
//                 return false;
//             }
//         }
        
    }
};