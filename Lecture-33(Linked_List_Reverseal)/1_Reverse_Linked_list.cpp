class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
             ListNode *imd=NULL;
          ListNode *root=head;
          while(root!=NULL)
          {
            ListNode *ptr=root->next;
            root->next=imd;
            imd=root;
            root=ptr;
          }  
          return imd;
        }
    };
    