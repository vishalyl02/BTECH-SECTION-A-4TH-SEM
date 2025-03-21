// https://leetcode.com/problems/count-the-number-of-consistent-strings/description/

class Solution {
    public:
        int countConsistentStrings(string awd, vector<string>& wds) {
            map<char,int>mp1;
            for(int i=0;i<awd.length();i++)
            {
                mp1[awd[i]]++;
            }
            int cnt=0;
            for(int i=0;i<wds.size();i++)
            {
              bool flag=true;
              for(int j=0;j<wds[i].length();j++)
              {
                if(mp1[wds[i][j]]==0)
                    {
                        flag=false;
                        break;
                    }   }
              if(flag==true)
              cnt++; 
            }
            return cnt;
        }
    };