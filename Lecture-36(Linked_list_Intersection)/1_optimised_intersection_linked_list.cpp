
class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *r1, ListNode *r2) {
            ListNode *root1=r1;
            ListNode* root2=r2;
    
            while(root1!=root2)
            {
                if(root1==NULL && root2==NULL)
                {
                        return NULL;
                }
                if(root1==NULL)
                root1=r2;
                else
                root1=root1->next;
                if(root2==NULL)
                {
                    root2=r1;
                }
                else
                root2=root2->next;
            }
            return root1;
        }
    };