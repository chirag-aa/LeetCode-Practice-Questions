/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        if(head.val==head.next.val && head.next.next==null){
            return null;
        }
        ListNode prev=null;
        ListNode slow=head;
        ListNode fast = head.next;

        while(fast!=null){
            if(slow.val!=fast.val){
                prev=slow;
                slow=slow.next;
                fast=fast.next;
            }
            else if(slow.val==fast.val){
                while(fast!=null && slow.val==fast.val){
                    fast=fast.next;
                }
                if(prev!=null){
                  prev.next=fast;
                }
                else {
                    head=fast;
                }
                
                slow=fast;
                if(fast!=null){
                    fast=fast.next;
                }
            }
        }
        return head;
    }
}