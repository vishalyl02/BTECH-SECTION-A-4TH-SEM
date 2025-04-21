// Deletion of Node of Linked List


#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node(int data)
    {
        val=data;
        next=NULL;
    }
};

void Delete_node(Node *head,int k)
{

    int count=1;
    Node *imd=head;
    head=head->next;
    while(count<k)
    {
        imd=head;
        head=head->next;
        count++;
    }
    imd->next=imd->next->next;
}
int main()
{
    int n,x;
    cin>>n;
    Node *dummy=new Node(0);
    Node *root=dummy;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        Node *ptr=new Node(x);
        root->next=ptr;
        root=ptr;
    }
    int k;
    cin>>k;
    Delete_node(dummy,k);

    root=dummy->next;
    while(root!=NULL)
    {
        cout<<root->val;
        root=root->next;
    }
return 0;
}