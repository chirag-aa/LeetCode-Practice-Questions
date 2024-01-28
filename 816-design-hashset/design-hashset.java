class ListNode {
    public int data;
    public ListNode next;
    public ListNode(){

    }
    public ListNode(int data){
        this.data=data;
        this.next=null;
    }
    public ListNode(int data,ListNode next){
        this.data=data;
        this.next=next;
    }
}
class MyHashSet {

   ListNode newNode = new ListNode(-1);
   ListNode head = newNode;

    public MyHashSet() {
        
    }
    
    public void add(int key) {
        if(contains(key)==true){
            return;
        }
        ListNode newNode = new ListNode(key);
        ListNode temp2 = head; 
        while(temp2.next!=null){
            temp2=temp2.next;
        }
        temp2.next=newNode;
        temp2=temp2.next;
        return;
    }
    
    public void remove(int key) {

        if(contains(key)==true){
        ListNode temp1 = head;
        ListNode prev = null;

        if(head==null){
            return;
        }
        if(head.data==key){
            head=head.next;
            return;
        }
        while(temp1!=null){
            if(temp1.data==key){
              prev.next = temp1.next;
              return;
            }
            prev = temp1;
            temp1=temp1.next;
        }
      } 
      return;
    }
    
    public boolean contains(int key) {
        ListNode temp1 = head;
        if(temp1==null){
            return false;
        }
        while(temp1!=null){
            if(temp1.data==key){
                return true;
            }
            temp1=temp1.next;
        }
        return false;
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */