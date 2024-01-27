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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1==null && l2==null){
            return null;
        }
        if(l1==null && l2!=null){
            return l2;
        }
        if(l1!=null && l2==null){
            return l1;
        }
        ListNode temp1 = l1;
        ListNode temp2 = l2;

        int sum = 0;
        int carry = 0;
        int ld = 0;
        ListNode ans = new ListNode(-1);
        ListNode temp = ans;
        while(temp1!=null && temp2!=null){
            sum = temp1.val + temp2.val + carry;
            if(sum>=10){
              ld = sum % 10;
              carry = sum/10;
            }
            else {
                carry = 0;
                ld = sum;

            }
            ListNode newNode = new ListNode(ld);
            temp.next = newNode;
            temp=temp.next;
            temp1=temp1.next;
            temp2=temp2.next;
        }
        while(temp1!=null){
            sum = temp1.val + carry;
            if(sum>=10){
              ld = sum % 10;
              carry = sum/10;
            }
            else {
                carry = 0;
                ld = sum;
            }
            ListNode newNode = new ListNode(ld);
            temp.next = newNode;
            temp=temp.next;
            temp1=temp1.next;
        }

        while(temp2!=null){
            sum = temp2.val + carry;
            if(sum>=10){
              ld = sum % 10;
              carry = sum/10;
            }
            else {
                carry = 0;
                ld = sum;
            }
            ListNode newNode = new ListNode(ld);
            temp.next = newNode;
            temp=temp.next;
            temp2=temp2.next;
        }

        if(carry>=1){
          ListNode newNode = new ListNode(carry);
          temp.next=newNode;
          temp=temp.next;
        }
        return ans.next;
    }
}