class Pair {
    int element;
    int index;
    public Pair(int element,int index){
        this.element = element;
        this.index = index;
    }
    public int getElement(){
        return this.element;
    }
    public int getIndex(){
        return this.index;
    }
}
class Solution {
    public int[] findNextSmallerToRight(int[] arr,int n){
       Stack<Pair>s1 = new Stack<>();
      int ans[] = new int[n];
      Pair p1 = new Pair(arr[n-1],n-1);
      s1.push(p1);
      ans[n-1]=1;
      for(int i=n-2;i>=0;i--){

        while(!s1.isEmpty() && s1.peek().getElement()>=arr[i]){
            s1.pop();
        }
        if(s1.isEmpty()){  
            ans[i] = n - i;    
        }
        else if(!s1.isEmpty() && s1.peek().getElement()<arr[i]){
            ans[i] =  s1.peek().getIndex() - i;
        }
        Pair pp = new Pair(arr[i],i);
        s1.push(pp);
      }
      return ans;
    }
    public int[] findNextSmallerToLeft(int[] arr,int n){
      Stack<Pair>s1 = new Stack<>();
      int ans[] = new int[n];
      Pair p1 = new Pair(arr[0],0);
      s1.push(p1);
      ans[0]=1;
      for(int i=1;i<n;i++){

        while(!s1.isEmpty() && s1.peek().getElement()>=arr[i]){
            s1.pop();
        }
        if(s1.isEmpty()){
          ans[i] = i- (-1);
        }
        else if(!s1.isEmpty() && s1.peek().getElement()<arr[i]){
            ans[i] = i - s1.peek().getIndex();
        }
        Pair pp = new Pair(arr[i],i);
        s1.push(pp);
      }
      return ans;
    }
    public int largestRectangleArea(int[] arr) {
        int n = arr.length;
        int nextSmallertoleft[] = new int[n]; 
        int nextSmallertoright[] = new int[n];
        int ans = 0;
        nextSmallertoleft  =  findNextSmallerToLeft(arr,n);
        nextSmallertoright = findNextSmallerToRight(arr,n);
        for(int i = 0;i<n;i++){
            System.out.print(nextSmallertoleft[i]);
        }
        System.out.println();
        for(int i = 0;i<n;i++){
            System.out.print(nextSmallertoright[i]);
        }
         for(int i = 0;i<n;i++){
            ans = Math.max(ans,(nextSmallertoleft[i]+nextSmallertoright[i]-1)*arr[i]);
        }
        return ans;
    }
    public int maximalRectangle(char[][] matrix) {
      
        int rowLen = matrix.length;
        int colLen = matrix[0].length;
        int temp = 0;
        int arr[] = new int[colLen];
        int finalAns = 0;
        for(int i = 0;i<rowLen;i++){
            temp = 0;
            for(int j=0;j<colLen;j++){
                if(i==0){
                    arr[temp] = matrix[i][j] - '0';
                    temp++;
                }
                else {
                    if(matrix[i][j]=='0'){
                        arr[temp] = 0;
                    }
                    else {
                        arr[temp] = arr[temp] + (matrix[i][j] - '0');
                    }
                    temp++;
                }
            }
           int ans =  largestRectangleArea(arr);
           finalAns = Math.max(finalAns,ans);
        }
        return finalAns;
        
    }
}