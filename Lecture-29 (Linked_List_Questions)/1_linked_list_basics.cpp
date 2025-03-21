#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
};
int main(){
   
    Node *a,*b,*c,*d,*e;

    a=new Node();
    b=new Node();
    c=new Node();
    d=new Node();
    e=new Node();
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
   
    Node* head=a;
int x;

while(head!=NULL)
{
    cin>>x;
    head->val=x;
    head=head->next;
}

 

    head=a;
    int count=0;
    int even_sum=0,odd_sum=0;
    
    while(head!=NULL)
    {
        if(count%2==0)
        even_sum+=head->val;
        else
        odd_sum+=head->val;
        head=head->next;
        count++;
    }
    
    cout<<abs(even_sum-odd_sum)<<endl;
    return 0;

}