// https://leetcode.com/problems/implement-queue-using-stacks/description/

class MyQueue {
    public:
        MyQueue() {
            
        }
        
        stack<int>st;
        void push(int x) {
            st.push(x);
        }
        
        int pop() {
           stack<int>st1;
           while(st.size()>0)
           {
            st1.push(st.top());
            st.pop();
           }
           int val=st1.top();
            st1.pop();
            while(st1.size()>0)
            {
                st.push(st1.top());
                st1.pop();
            }
            return val;
        }
        
        int peek() {
    
                stack<int>st1;
                while(st.size()>0)
                {
                    st1.push(st.top());
                    st.pop();
                }
            int res=st1.top();
    
            while(st1.size()>0)
            {
                st.push(st1.top());
            st1.pop();
            } 
        return res;
        }
        
        bool empty() {
            if(st.size()==0)
            return true;
            return false;
        }
    };
