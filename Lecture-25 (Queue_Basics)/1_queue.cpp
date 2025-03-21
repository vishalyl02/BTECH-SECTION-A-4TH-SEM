
// Queue

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Task -1 -> Creating a Queue
    queue<int>q;

    // Task -2 -> Data storing in the queue -> 2,3,5,1,6,9
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(1);
    q.push(6);
    q.push(9);

    // Task -3 Printing the size
    cout<<q.size()<<endl;

    // Task -4 -> Printing the front element

    cout<<q.front()<<endl;

    // Task -5 -> Removing the front element

    q.pop();

    // Task -6 -> Printing all elements of queue

    while(q.size()>0)
{
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}