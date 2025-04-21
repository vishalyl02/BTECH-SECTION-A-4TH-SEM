#include<iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int val;
    Node *next;

    Node(int p)
    {
        val=p;
        next=NULL;
    }
};

int main()
{
    int size,x;
    cin>>size;

    vector<int>v1;
    for(int i=0;i<size;i++)
    {
        cin>>x;
        v1.push_back(x);
    }

    Node *root,*head;
    root=new Node(v1[0]);
head=root;
    for(int i=1;i<size;i++)
    {
        Node *ptr=new Node(v1[i]);
        head->next=ptr;
        head=ptr;
    }
head=root;
int sum=0;
    while(head!=NULL)
    {
        sum+=head->val;
        head=head->next;
    }

    cout<<sum<<endl;
// Middle of the linked list

    //  s f   f   f
// 1 2 3 4 5 6 7 8
Node * slow=root, *fast=root;

while(fast->next!=NULL && fast->next->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
}

cout<<slow->val<<endl;

    return 0;
}