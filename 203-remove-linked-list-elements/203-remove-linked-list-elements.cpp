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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        ListNode *dummyNode=new ListNode(-1);
        ListNode *dummyptr=dummyNode;
        ListNode *temp=head;
        
        while(temp!=NULL){
            if(temp->val==val){
                temp=temp->next;
            }
            else{
                ListNode *newNode =new ListNode(temp->val);
                dummyptr->next=newNode;
                dummyptr=dummyptr->next;
                temp=temp->next;
            }
        }
        return dummyNode->next;
    }
};