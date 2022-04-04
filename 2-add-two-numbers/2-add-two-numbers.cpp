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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL){
            return NULL;
        }
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        
        int sum=0;
        int carry=0;
        ListNode *dummyNode=new ListNode(-1);
        ListNode *temp=dummyNode;
        
        while(temp1!=NULL && temp2!=NULL){
            sum = carry + temp1->val + temp2->val;
            
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *newNode= new ListNode(sum);
            temp->next=newNode;
            temp=temp->next;
            
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
        
        while(temp1!=NULL){
            sum = temp1->val + carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
             else{
                carry=0;
            }
            ListNode *newNode= new ListNode(sum);
            temp->next=newNode;
            temp=temp->next;
            
            temp1=temp1->next;
        }
        
           while(temp2!=NULL){
            sum = temp2->val + carry;
            if(sum>9){
                sum=sum%10;
                carry=1;
            }
                else{
                carry=0;
            }
            ListNode *newNode= new ListNode(sum);
            temp->next=newNode;
            temp=temp->next;
            
            temp2=temp2->next;
        }
        
        if(carry==1){
            ListNode *newNode= new ListNode(1);
            temp->next=newNode;
            temp=temp->next;
        }
        return dummyNode->next;
        
    }
};