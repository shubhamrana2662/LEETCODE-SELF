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
        ListNode *l3=new ListNode(0);
         ListNode *curr3=l3;
        ListNode *curr1=l1;

        ListNode *curr2=l2;
        int carry =0 ;

        while(curr1!=NULL&&curr2!=NULL){
            
            if (curr1->val+curr2->val+carry<10)
            { 
               l3->val= curr1->val+curr2->val+carry; 
               
                carry=0;
            }
             else { 
                l3->val=curr1->val+curr2->val-10+carry; 
                carry=1; 
                } 
        
               
                if(curr1->next!=NULL&&curr2->next!=NULL){
                l3->next = new ListNode(0);
                 l3 = l3->next;}
                curr1=curr1->next; 
                curr2=curr2->next; }

        if (curr2!=NULL){
            curr1=curr2;
        }
        if (carry ==1&&curr1==NULL){
              l3->next = new ListNode(1);
                   
        }
              else  if(carry==1)
                {

                    l3->next = new ListNode(0);
                    l3 = l3->next;

                    
                        while(curr1!=NULL){
                           if(curr1->val+carry<10){
                            l3->val= curr1->val+carry; 
               
                              carry=0;
                           }else{
                            l3->val=curr1->val-10+carry; 
                              carry=1;
                           }
                           if(curr1->next!=NULL){
                            l3->next = new ListNode(0);
                            l3 = l3->next;}
                            curr1=curr1->next; 


                        }

                    

                }else{
                    while(curr1!=NULL){
                     l3->next = new ListNode(0);
                     l3->next->val= curr1->val; 
                            l3 = l3->next;
                            curr1=curr1->next;
                }}
                if (carry==1){
                     l3->next = new ListNode(1);
                }
        return curr3;
        
        
    }
};