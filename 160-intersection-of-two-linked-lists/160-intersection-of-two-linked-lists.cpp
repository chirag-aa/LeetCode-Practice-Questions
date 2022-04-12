/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head){
        if(head==NULL){
            return 0;
        }
        if(head->next==NULL){
            return 1;
        }
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL){
            return NULL;
        }
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        
        int lenA=length(headA);
        int lenB=length(headB);
        
        int c= abs(lenA-lenB);
        if(lenA>lenB){
            while(c>0){
                tempA=tempA->next;
                c--;
            }
        }
        else if(lenB>lenA){
            while(c>0){
                tempB=tempB->next;
                c--;
            }
        }
        while(tempA!=NULL && tempB!=NULL){
            if(tempA==tempB){
                return tempA;
            }
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};