class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        // if(n==1){
        //     return true;
        // }
        // unsigned long long prod=1;
        // for(int i=1;i<n;i++){
        //     prod=prod*2;
        //     if(prod==n){
        //         return true;
        //     }
        // }
        // return false;
        if(n==1){
            return true;
        }
        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        else{
            return false;
        }
    }
};