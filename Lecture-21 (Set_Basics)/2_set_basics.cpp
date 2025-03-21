#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,y,x;
    cin>>n;
    
    set<int>st;
    // set<int>::iterator itr;
    for(int i=0;i<n;i++)
    {
        cin>>y>>x;
        if(y==1)
        {
            st.insert(x);
        }
        if(y==2)
        {
            st.erase(x);
        }
        if(y==3)
        {
            auto itr=st.find(x);
            if(itr==st.end())
            {
                cout<<"No"<<endl;
            }
            else {
            cout<<"Yes"<<endl;
            }
        } 
    }
    return 0;
}
