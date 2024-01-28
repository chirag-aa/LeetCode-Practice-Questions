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
    public int findLen(ListNode head){
        if(head==null){
            return 0;
        }
        if(head.next==null){
            return 1;
        }
        int len=0;
        ListNode temp = head;
        while(temp!=null){
            len++;
            temp=temp.next;
        }
        return len;
    }
    public ListNode reverseList(ListNode head){
        if(head==null || head.next==null){
            return head;
        }
        ListNode prev = null;
        ListNode curr = head;
        ListNode nextNode = head.next;

        while(nextNode!=null){
            curr.next = prev;
            prev=curr;
            curr=nextNode;
            nextNode = nextNode.next;
        } 
        curr.next=prev;
        head=curr;
        return head;
    }
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || head.next==null){
            return head;
        }
        int len = findLen(head);
        int rotateBy =  k%len;
        if(len==k){
            return head;
        }
        int target = len - rotateBy;
        ListNode temp = head;
        ListNode prev = null;

        while(target>0){
            prev=temp;
            temp=temp.next;
            target--;
        }
        prev.next=null;
        
        ListNode reverseHead1 = reverseList(head);
        ListNode reverseHead2 = reverseList(temp);

        ListNode reverseHead1temp = reverseHead1;
        while(reverseHead1temp.next!=null){
            reverseHead1temp = reverseHead1temp.next;
        }
        reverseHead1temp.next = reverseHead2;

        ListNode finalReverseHead = reverseList(reverseHead1);

        return finalReverseHead;
    }
}