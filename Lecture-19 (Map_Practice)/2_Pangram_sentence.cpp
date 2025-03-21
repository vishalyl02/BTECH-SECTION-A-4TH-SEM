
// https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

class Solution {
    public:
        bool checkIfPangram(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(char ch='a';ch<='z';ch++)
        {
            if(mp[ch]==0)
            {
              return false;
            }
        }
        return true;
    }
    };