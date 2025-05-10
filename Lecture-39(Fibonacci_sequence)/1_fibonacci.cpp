#include<iostream>
using namespace std;
// Recursive function
int fib(int num)
{
    //1.Base case
    if(num==0)
    return 0;
    if(num==1)
    return 1;

    // Recurrence relation

    int smaller_problem1=fib(num-1);
    int smaller_problem2=fib(num-2);
    int bigger_problem=smaller_problem1+smaller_problem2;
// 3. Returning a solution
return bigger_problem;

}
int main()
{
    int n;
    cin>>n;

    int ans=fib(n);
    cout<<ans<<endl;
    return 0;
}