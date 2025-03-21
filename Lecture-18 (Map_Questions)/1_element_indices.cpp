#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
int n,x;
cin>>n;

vector<int>v1;
for(int i=0;i<n;i++)
{
    cin>>x;
    v1.push_back(x);
}

// storing the indices in map vector

map<int,vector<int>>mp;
for(int i=0;i<n;i++)
{
    mp[v1[i]].push_back(i);
}

// Printing the indices of elements

for(auto it:mp)
{

    //pair={int, vector<int>};
cout<<it.first<<" -> ";
for(int i=0;i<it.second.size();i++)
{
    cout<<it.second[i]<<" ";
}
cout<<endl;
}

return 0;
}