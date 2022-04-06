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
    int length(ListNode *head){
        if(head==NULL){
            return 0;
        }
        if(head->next==NULL){
            return 1;
        }
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        if(head->next==NULL && n==1){
            return NULL;
        }
        int count=1;
        int len=length(head);
        int needed= len-n;
        if(needed==0){
            head=head->next;
            return head;
        }
        ListNode* temp=head;
        while(count!=needed && temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp->next=temp->next->next;
        return head;
    }
};