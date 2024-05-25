class Pair {
    private int ele;
    private int minEle;

    Pair(int ele,int minEle){
        this.ele = ele;
        this.minEle = minEle;
    }
    int getEle(){
        return this.ele;
    }
    int getminEle(){
        return this.minEle;
    }

}
class MinStack {
     
    Stack<Pair>s1;

    public MinStack() {
        s1 = new Stack<>();
    }
    
    public void push(int val) {
        if(s1.isEmpty()){
            Pair p1 = new Pair(val,val);
            s1.push(p1);
            return;
        }
        Pair p2 = s1.peek();
        int minEle = p2.getminEle();
        if(minEle<val){
            Pair p1 = new Pair(val,minEle);
            s1.push(p1);
        }
        else {
            Pair p1 = new Pair(val,val);
            s1.push(p1);
        }
        return;
    }
    
    public void pop() {
        if(!s1.isEmpty()){
            s1.pop();
            return;
        }
        return;
    }
    
    public int top() {
        if(!s1.isEmpty()){
            Pair p1 = s1.peek();
            return p1.getEle();
        }
        return -1;
    }
    
    public int getMin() {
        if(!s1.isEmpty()){
            Pair p1 = s1.peek();
            return p1.getminEle();
        }
        return -1;
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