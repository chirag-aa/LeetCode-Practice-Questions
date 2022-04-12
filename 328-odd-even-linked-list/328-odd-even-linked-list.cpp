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
    ListNode* oddEvenList(ListNode* head) {
         if(head==NULL || head->next==NULL){
             return head;
         }
        int counter=1;
        
        ListNode *evenDummy=new ListNode(-1);
        ListNode *evenTemp=evenDummy;
        
        ListNode *oddDummy=new ListNode(-1);
        ListNode *oddTemp=oddDummy;
        
        ListNode *temp=head;
        
        while(temp!=NULL){
            if(counter%2==0){
                ListNode *newNode=new ListNode(temp->val);
                evenTemp->next=newNode;
                evenTemp=evenTemp->next;
                counter++;
            }
            else{
                ListNode *newNode=new ListNode(temp->val);
                oddTemp->next=newNode;
                oddTemp=oddTemp->next;
                counter++;
            }
            temp=temp->next;
            
        }
        oddTemp->next=evenDummy->next;
        return oddDummy->next;
    }
};