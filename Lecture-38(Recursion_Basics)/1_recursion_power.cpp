#include<iostream>
using namespace std;

// Recursive function -> function which uses recursion
int find_power(int num)
{
    // 1. Base case -> simplest problem
    if(num==0)
    return 1;
    // 2. Recurrence Relation
    int smaller_problem=find_power(num-1);
    int bigger_problem=2*smaller_problem;

    //3. Returning the solution
    return bigger_problem;
}
int main()
{
    int n;
    cin>>n;

    int ans=find_power(n);
    cout<<ans<<endl;
    return 0;
}