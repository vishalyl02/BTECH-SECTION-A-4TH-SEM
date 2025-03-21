
// PRIORITY QUEUE

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // TASK A-> CREATE A PRIORITY QUEUE
    priority_queue<int>pq;

    // INSERT ELEMENTS -1,2,6 , -9, 100, 120,-130,200
    pq.push(-1);
    pq.push(2);
    pq.push(6);
    pq.push(-9);
    pq.push(100);
    pq.push(120);
    pq.push(-130);
    pq.push(200);

    // PRINT TOP MOST ELEMENT AND 
    // DELETE THAT ALSO

    cout<<"Top most element is :"<<pq.top()<<endl;
    pq.pop();

    //PRINT IN THE DESCENDING ORDER
    priority_queue<int>pq1;
    while(pq.size()>0)
    {
        cout<<pq.top()<<" ";
        pq1.push(pq.top());
        pq.pop();
    }
    cout<<endl;
// PRINT 3RD LARGEST ELEMENT
int k=0;
int val=0;
while(k!=3)
{
val=pq1.top();
pq1.pop();
k++;
}
cout<<val<<endl;
return 0;

}