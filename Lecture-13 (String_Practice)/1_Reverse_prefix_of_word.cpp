// https://leetcode.com/problems/reverse-prefix-of-word/description/

class Solution {
    public:
        string reversePrefix(string word, char ch) {
            
            string res;
            int pos=0;
            for(int i=0;i<word.length();i++)
            {
                if(word[i]==ch)
                {
                    pos=i;
                    break;
                }
            }
          string s1=word.substr(0,pos+1);
        reverse(s1.begin(),s1.end());
        string s2=word.substr(pos+1);
    
        res=s1+s2;
        return res;
      
        }
    };