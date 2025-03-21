

#include<iostream>
#include<queue>
using namespace std;

int main()
{

priority_queue<int,vector<int>
    ,greater<int>>pq;
    //
    pq.push(-1);
    pq.push(2);
    pq.push(100);
    pq.push(-100);
    pq.push(12);
    pq.push(-99);

cout<<pq.top()<<endl;

while(pq.size()>0)
{
    cout<<pq.top()<<" ";
    pq.pop();
}

return 0;
}