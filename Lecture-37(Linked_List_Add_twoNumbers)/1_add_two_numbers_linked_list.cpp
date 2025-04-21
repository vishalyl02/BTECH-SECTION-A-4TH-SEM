
class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
           ListNode *dummy=new ListNode (0);
           ListNode *root=dummy;
           int carry=0;
           while(l1!=NULL && l2!=NULL)
           {
            int data=l1->val+l2->val+carry;
            
            ListNode *ptr=new ListNode(data%10);
            carry=data/10;
            l1=l1->next;
            l2=l2->next;
            root->next=ptr;
            root=ptr;
           } 
           while(l1!=NULL && l2==NULL)
           {
            int data=l1->val+carry;
            ListNode *ptr=new ListNode(data%10);
            carry=data/10;
            l1=l1->next;
            root->next=ptr;
            root=ptr;
           }
           while(l2!=NULL && l1==NULL)
           {
             int data=l2->val+carry;
            ListNode *ptr=new ListNode(data%10);
            carry=data/10;
            l2=l2->next;
            root->next=ptr;
            root=ptr;
           }
           if(carry>0)
           {
           ListNode *ptr=new ListNode(carry);
           root->next=ptr;
           }
           return dummy->next;
        }
    };