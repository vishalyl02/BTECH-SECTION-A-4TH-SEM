#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{

// Creating a map
map<int,int>mp;

vector<int>v1;
int n,x;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>x;
v1.push_back(x);
}


for(int i=0;i<n;i++)
{
    mp[v1[i]]=mp[v1[i]]+1;
}

// Printing the frequency

for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;
}

return 0;
}