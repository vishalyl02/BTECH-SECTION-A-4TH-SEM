
//  https://leetcode.com/problems/clear-digits/description/

class Solution {
    public:
        string clearDigits(string s) {
            
            stack<char>st;
            for(int i=0;i<s.length();i++)
            {
                if(st.size()>0)
                {
                    if(s[i]>='0' && s[i]<='9')
                    {
                        if(st.top()>='a' && st.top()<='z')
                        {
                            st.pop();
                        }
                        else
                        st.push(s[i]);
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else
                {
                    st.push(s[i]);
                }
            }
    
        string res="";
            while(st.size()>0)
            {
                res.push_back(st.top());
                st.pop();
            }
            reverse(res.begin(),res.end());
            return res;
        }
    };