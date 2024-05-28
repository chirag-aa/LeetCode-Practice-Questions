class Solution {
    public int[] asteroidCollision(int[] arr) {
        
        Stack<Integer>s1 = new Stack<>();
        int n = arr.length;

        for(int i=0;i<n;i++){
            if(s1.isEmpty()){
                s1.push(arr[i]);
                continue;
            }
            while(!s1.isEmpty() && s1.peek()>0 && arr[i]<0 && s1.peek()<Math.abs(arr[i])){
                s1.pop();
            }
            if(!s1.isEmpty() && s1.peek()<0 && arr[i]<0){
                s1.push(arr[i]);
                continue;
            }
            else if(!s1.isEmpty() && s1.peek()<0 && arr[i]>0){
                s1.push(arr[i]);
                continue;
            }
            else if(!s1.isEmpty() && arr[i]<0 && s1.peek() == Math.abs(arr[i])){
                s1.pop();
                continue;
            }
            else if(!s1.isEmpty() && s1.peek()>0 && arr[i]>0){
                s1.push(arr[i]);
                continue;
            }
            if(s1.isEmpty()){
                s1.push(arr[i]);
                continue;
            }
        }
      
      int ans[] = new int[s1.size()];
      int index = s1.size()-1;
      while(!s1.isEmpty()){
         ans[index] = s1.peek();
         s1.pop();
         index--;
      }
      return ans;
    }
}