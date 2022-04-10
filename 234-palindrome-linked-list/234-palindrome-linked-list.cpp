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
    bool checkpalindrome(ListNode *head1,ListNode *head2){
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
    ListNode *reverse(ListNode *head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *prev=NULL;
        ListNode *fast=head;
        ListNode *curr=head;
        
        while(curr!=NULL){
            fast=fast->next;
            curr->next=prev;
            prev=curr;
            curr=fast;
        }
        head=prev;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return false;
        }
        
        if(head->next==NULL){
            return true;
        }
        ListNode *temp=head;
        ListNode *dummyNode=new ListNode(-1);
        ListNode *dummyptr=dummyNode;
        while(temp!=NULL){
            ListNode *newNode= new ListNode(temp->val);
            dummyptr->next=newNode;
            dummyptr=dummyptr->next;
            temp=temp->next;
        }
        
        ListNode *revHead= reverse(dummyNode->next);
        
        bool ans= checkpalindrome(head,revHead);
        
        return ans;
    }
};