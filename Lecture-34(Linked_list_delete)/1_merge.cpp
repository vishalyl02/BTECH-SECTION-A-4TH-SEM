class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
           ListNode *root=new Node (0);
            ListNode *head=root;
           while(list1!=NULL && list2!=NULL)
           {
            if(list1->val<list2->val)
            {
                ListNode *ptr=new ListNode(list1->val);
                root->next=ptr;
                root=ptr;
                list1=list1->next;
            }
            else if(list1->val>list2->val)
            {
                 ListNode *ptr=new ListNode(list2->val);
                root->next=ptr;
                root=ptr;
                list2=list2->next;
            }
            else
            { 
                ListNode *ptr=new ListNode(list2->val);
                root->next=ptr;
                root=ptr;
                list1=list1->next;
                ptr=new ListNode(list1->val);
                root->next=ptr;
                root=ptr;
                list2=list2->next;
           } 
        }
    };