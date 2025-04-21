#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
int n;
cin>>n;
map<int,int>mp;
int x,y;
for(int i=0;i<n;i++)
{
    cin>>x>>y;
mp[x]=y;
}

map<int,vector<int>>mp1;

for(auto it:mp)
{
mp1[it.second].push_back(it.first);
}

for(auto it:mp1)
{
    for(auto p:it.second){
        cout<<p<<" "<<it.first<<endl;
    }
}
return 0;
}