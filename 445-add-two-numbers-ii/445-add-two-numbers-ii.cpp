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
    ListNode *reverseList(ListNode *head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *temp=NULL;
        ListNode *fast=head;
        ListNode *prev=head;
        
        while(prev!=NULL){
            fast=fast->next;
            prev->next=temp;
            temp=prev;
            prev=fast;
        }
        head=temp;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if(l1==NULL){
             return l2;
         }
        if(l2==NULL){
            return l1;
        }
        
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        
        temp1= reverseList(l1);
        temp2= reverseList(l2);
        
        ListNode *dummyNode= new ListNode(-1);
        ListNode *temp=dummyNode;
        int total=0;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL){
            total= temp1->val+ temp2->val+ carry;
            
            if(total>9){
                total=total%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *newNode=new ListNode(total);
            temp->next=newNode;
            temp=temp->next;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        while(temp1!=NULL){
            total= temp1->val+carry;
            
            if(total>9){
                total=total%10;
                carry=1;
            }
            else{
                carry=0;
            }
             ListNode *newNode=new ListNode(total);
            temp->next=newNode;
            temp=temp->next;
            
            temp1=temp1->next;
        }
        
        while(temp2!=NULL){
            total= temp2->val+carry;
            
            if(total>9){
                total=total%10;
                carry=1;
            }
            else{
                carry=0;
            }
             ListNode *newNode=new ListNode(total);
            temp->next=newNode;
            temp=temp->next;
            
            temp2=temp2->next;
        }
        
        if(carry==1){
            ListNode *newNode=new ListNode(1);
            temp->next=newNode;
            temp=temp->next;
        }
        
        ListNode *result= reverseList(dummyNode->next);
        return result;
    }
    
};