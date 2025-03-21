

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

class Solution {
    public:
        string removeDuplicates(string s) {
            string res="";
            stack<char>st;
            for(int i=0;i<s.length();i++)
            {
                if(st.size()==0) // if stack is empty
                {
                    st.push(s[i]);
                }
                else
                {
                    if(st.top()==s[i])  // checking the top most element of stack
                    st.pop();
                    else
                    st.push(s[i]);
                }
            }
            while(st.size()>0)
            {
                res.push_back(st.top());
                st.pop();
            }
            reverse(res.begin(),res.end());
            return res;
        }
    };