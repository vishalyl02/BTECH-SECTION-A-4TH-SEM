// https://leetcode.com/problems/valid-anagram/description/


class Solution {
    public:
        bool isAnagram(string s, string t) {
    
    
    
    
            if(s.length()!=t.length())
            return false;
    
            map<char,int>mp1;
            map<char,int>mp2;
    
    
            for(int i=0;i<s.length();i++)
            {
                mp1[s[i]]++;
            }
    
            for(int i=0;i<t.length();i++)
            {
                mp2[t[i]]++;
            }
           
    
            for(auto it:mp1)
            {
                if(mp2[it.first]!=mp1[it.first])
                return false;
            }
    
            if(mp1!=mp2)
            return false;
    
             return true;
    
        }
    };
