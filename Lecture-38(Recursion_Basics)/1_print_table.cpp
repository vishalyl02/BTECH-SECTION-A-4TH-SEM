#include<iostream>
using namespace std;

void print_table(int index)
{
    if(index==0) // Base case
    return;

    // Recurrence Relation
    print_table(index-1);
    cout<<2*index<<endl;
}
int main()
{
    int idx;
    cin>>idx;
    print_table(idx);
    return 0;
}