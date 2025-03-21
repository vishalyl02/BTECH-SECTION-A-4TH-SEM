#include<iostream>
#include<stack>
using namespace std;

int main()
{
// Task -1 -> Create a stack data structure of type integer
stack<int>st;

// Task -2 -> Store the elements 1 2 3 6 2 9

// st.push(1);
// st.push(2);
// st.push(3);
// st.push(6);
// st.push(2);
// st.push(9);

// Task -3 -> size of stack

cout<<st.size()<<endl;


// Task -4 -> print top most element and also remove the top element

int val=st.top();
cout<<val<<endl;
st.pop();

// Task -5 -> Printing all elements

// while(true)
// {
//     cout<<st.top()<<" ";
//     st.pop();
// }
return 0;
}