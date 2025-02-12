#include<iostream>
#include<vector>
using namespace std;
int main()
{
// Task1-> Declare a vector of size 10
vector<int>v1(10);
// Task 2-> Enter the value fro
m user;
for(int i=0;i<v1.size();i++)
{
cin>>v1[i];
}
vector<int>mod_v;
for(int i=0;i<v1.size();i++)
{
    if(v1[i]%3==0)
    {cout<<v1[i]<<" ";
    }
    mod_v.push_back(v1[i]%3);
}
cout<<endl;
cout<<" Modulus Vector elements"<<endl;
for(int i=0;i<mod_v.size();i++)
{
    cout<<mod_v[i]<<" ";
}
return 0;
}