
//  https://leetcode.com/problems/reverse-prefix-of-word/description/


class Solution {
    public:
        string reversePrefix(string wd, char ch) {
            
    
    
            int pos=-1;
            stack<char>st;
            for(int i=0;i<wd.length();i++)
            {
                if(wd[i]==ch)
                {
                    st.push(wd[i]);
                    pos=i;
                    break;
                }
                else
                st.push(wd[i]);  // change 1
            }
             string res="";   // change 2
            if(pos==-1)
            {
                return wd;
            }
            else
            {
               
                while(st.size()>0)
                {
                    res.push_back(st.top());
                    st.pop();
                }
    
                for(int i=pos+1;i<wd.length();i++)
                {
                    res.push_back(wd[i]);
                }
            }
            return res;
        }
    };