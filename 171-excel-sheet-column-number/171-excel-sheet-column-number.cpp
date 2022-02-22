class Solution {
public:
    long long int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        long long int temp=1;
        long long int sum=0;
        for(int i=n-1;i>=0;i--){
            sum=sum+ temp*((columnTitle[i]-'A')+1);
            temp=temp*26;
        }
        return sum;
    }
};