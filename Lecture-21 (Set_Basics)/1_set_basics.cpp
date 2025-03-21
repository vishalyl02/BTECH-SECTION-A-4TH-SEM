
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
    // Task -1 -> Create a set data structure 
    set<int>st;
    // Task -2 -> Inserting the elements in the set 5 9 2 3 2 1 2 4
    st.insert(5);
    st.insert(9);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(1);
    st.insert(2);
    st.insert(4);
    //Task -3 -> Printind the data from set
    for(auto it:st)
    {
        cout<<it<<" ";
    }
    // Task 4 -> Create an unordered set
    unordered_set<int>st1;
    st1.insert(5);
    st1.insert(9);
    st1.insert(2);
    st1.insert(3);
    st1.insert(2);
    st1.insert(1);
    st1.insert(2);
    st1.insert(4);
    cout<<endl;
    for(auto p:st1)
    {
        cout<<p<<" ";
    }
    return 0;
}