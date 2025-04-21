/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *r1, ListNode *r2) {
            
            map<ListNode*,int>mp;
            while(r1!=NULL || r2!=NULL)
            {
                if(r1!=NULL)
                {
                    mp[r1]++;
                    if(mp[r1]>1)
                    {
                        return r1;
                    }
                    r1=r1->next;
                }
                else if(r2!=NULL)
                {
                    mp[r2]++;
                if(mp[r2]>1)
                {
                    return r2;
                }
                r2=r2->next;
                }
            }
            return NULL;
        }
    };