

// https://leetcode.com/problems/rings-and-rods/description/

class Solution {
    public:
        int countPoints(string rgs) {
           map<int,vector<int>>mp;
    
            for(int i=0;i<=9;i++)
            {
                mp[i].resize(3);
            }
    
            for(int i=0;i<rgs.length();i+=2)
            {
                int p=rgs[i+1]-'0';
                if(rgs[i]=='R')
                {
                    mp[p][0]=1;
                }
                if(rgs[i]=='G')
                {
                    mp[p][1]=1;
                }
                if(rgs[i]=='B')
                {
                    mp[p][2]=1;
                }
            }
            int count=0;
            for(int i=0;i<=9;i++)
            {
                if(mp[i][0]+mp[i][1]+mp[i][2]==3)
                {
                    count++;
                }
            }
    
            return count;
    
        }
    };