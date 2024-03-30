class Solution {
    public List<Integer> getRow(int rowIndex) {
        List<List<Integer>>ans=new ArrayList<>();

        List<Integer>temp1 = new ArrayList<>();
        temp1.add(1);
        ans.add(temp1);

        if(rowIndex==0){
            return temp1;
        }

        List<Integer>temp2=new ArrayList<>();
        temp2.add(1);
        temp2.add(1);
        ans.add(temp2);

         if(rowIndex==1){
            return temp2;
        }

        int rowsLeft = rowIndex - 2;
        int currRow = 2;
        while(rowsLeft>=0){
            List<Integer>temp = new ArrayList<>();
            List<Integer>tempans = ans.get(ans.size()-1);
            temp.add(1);
            for(int i = 0;i<=tempans.size()-2;i++){
                int sum = tempans.get(i) + tempans.get(i+1);
                temp.add(sum);
            }
            temp.add(1);
            if(rowIndex==currRow){
                return temp;
            }
            currRow++;
            ans.add(temp);
            rowsLeft--;
        }
        return new ArrayList<>();
    }
}