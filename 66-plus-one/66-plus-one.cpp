class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>result;
        int carry=0;
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                sum=digits[i]+1;
            }            
            else{
                 sum=digits[i]+carry;
            }
            if(sum>9){
                int ld= sum%10;
                carry=1;
                result.push_back(ld);
            }
            else{
                carry=0;
                result.push_back(sum);
            }
        }
        if(carry==1){
            result.push_back(carry);
        }
        
        reverse(result.begin(),result.end());
        return result;
    }
};