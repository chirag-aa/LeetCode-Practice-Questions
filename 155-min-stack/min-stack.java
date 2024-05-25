class MinStack {
    
    private List<Integer>stack;
    int top;
    public MinStack() {
      stack = new ArrayList<>();
      top = -1;
    }
    
    public void push(int val) {
        if(top==-1){
            top++;
            stack.add(val);
            return;
        }
        top++;
        stack.add(val);
        return;
    }
    
    public void pop() {
        if(top==-1){
            return;
        }
        stack.remove(top);
        top--;
    }
    
    public int top() {
        if(top==-1){
            return -1;
        }
        int topElement = stack.get(top);
        return topElement;
    }
    
    public int getMin() {
        int minElement = Integer.MAX_VALUE;
        int n = stack.size();
        for(int i=0;i<n;i++){
            minElement = Math.min(minElement,stack.get(i));
        }
        return minElement;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */