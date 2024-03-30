class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>>ans = new ArrayList<>();
        
        List<Integer>ans1 = new ArrayList<>();
        ans1.add(1);
         ans.add(ans1);
        if(numRows==1){
            return ans;
        }
        List<Integer>ans2 = new ArrayList<>();
        ans2.add(1);
        ans2.add(1);
       
        ans.add(ans2);
        
        int totalRowsLeft = numRows - 2;

        while(totalRowsLeft>0){
            List<Integer>temp = ans.get(ans.size() -1);
            List<Integer>tempAns = new ArrayList<>();
            tempAns.add(1);
            for(int i=0;i<=temp.size()-2;i++){
                int sum = temp.get(i) + temp.get(i+1);
                tempAns.add(sum);
            }
            tempAns.add(1);
            ans.add(tempAns);
            totalRowsLeft--;
        }
        return ans;  
        }
}