//  https://leetcode.com/problems/time-needed-to-buy-tickets/description/


class Solution {
    public:
        int timeRequiredToBuy(vector<int>& tkts, int k) {
            queue<pair<int,int>>q;
            for(int i=0;i<tkts.size();i++)
            {
                q.push({tkts[i],i});
            }
    
            int tn=0;
            while(true)
            {
                auto p=q.front();
                q.pop();
                tn++;
                p.first-=1;
             if(p.second==k && p.first==0)
                return tn;
                if(p.first>0)
                q.push({p.first,p.second});
    
            }
    return 1;
        }
    };
    
