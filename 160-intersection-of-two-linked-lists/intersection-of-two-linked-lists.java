/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public int findListLen(ListNode head){
        if(head==null){
            return 0;
        }
        if(head.next==null){
            return 1;
        }
        ListNode temp = head;
        int len = 0;
        while(temp!=null){
            len++;
            temp = temp.next;
        }
        return len;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA==null && headB==null){
            return null;
        }
        if(headA!=null && headB==null){
            return null;
        }
        if(headA==null && headB!=null){
            return null;
        }
        int lenA = findListLen(headA); 
        int lenB = findListLen(headB);
        int skipNodes = 0;
    
        if(lenA>=lenB){
          skipNodes = lenA - lenB;
          ListNode tempA = headA;
          while(skipNodes>0){
              tempA=tempA.next;
              skipNodes--;
          }
          ListNode tempB = headB;
          while(tempA!=null && tempB!=null){
             if(tempA==tempB){
                 return tempA;
             }
             tempA = tempA.next;
             tempB = tempB.next;
          }
        }
        else {
            skipNodes = lenB - lenA;
            ListNode tempB = headB;
          while(skipNodes>0){
              tempB=tempB.next;
              skipNodes--;
          }
          ListNode tempA = headA;

          while(tempA!=null && tempB!=null){
             if(tempA==tempB){
                 return tempA;
             }
             tempA = tempA.next;
             tempB = tempB.next;
          }
        }
        return null;
    }
}