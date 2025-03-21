


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
// Declare a vector
vector<int>v1;
// Resize();
v1.resize(10);
// user input
for(int i=0;i<v1.size();i++)
{
cin>>v1[i];
}
v1.pop_back();
v1.pop_back();
// printing the vector
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
cout<<endl;
sort(v1.begin(),v1.end());
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
cout<<endl;
sort(v1.rbegin(),v1.rend());
for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}
return 0;
} 5,519,312.41)