/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* temp=NULL;
        ListNode* curr=head;
        ListNode* prev=head;
        while(prev!=NULL){
            curr=curr->next;
            prev->next=temp;
            temp=prev;
            prev=curr;
            
        }
        head=temp;
        return head;
    }
};