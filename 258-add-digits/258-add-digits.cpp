class Solution {
public:
    int calSum(int num){
        int sum=0;
        while(num>0){
            int ld=num%10;
            sum=sum+ld;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num<=9){
            return num;
        }
        int sum=calSum(num);
        return addDigits(sum);
    }
};