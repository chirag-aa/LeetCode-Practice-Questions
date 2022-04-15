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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        ListNode *ResultNode=new ListNode(-1);
        ListNode *trial=ResultNode;
        
        ListNode* ll1=list1;
        ListNode* ll2=list2;
        
        while(ll1!=NULL && ll2!=NULL){
            if(ll1->val<=ll2->val){
                trial->next=ll1;
                ll1=ll1->next;
                trial=trial->next;
            }
            else if(ll1->val >= ll2->val){
                trial->next=ll2;
                ll2=ll2->next;
                trial=trial->next;
            }
        }
        
        while(ll1!=NULL){
            trial->next=ll1;
            ll1=ll1->next;
            trial=trial->next;
        }
        
        while(ll2!=NULL){
            trial->next=ll2;
            ll2=ll2->next;
            trial=trial->next;
        }
        
        return ResultNode->next;
    }
};