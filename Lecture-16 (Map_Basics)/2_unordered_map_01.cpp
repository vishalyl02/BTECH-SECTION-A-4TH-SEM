#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    
// Task -1 -> Created unordered_map
unordered_map<int,int>mp;

mp[1]=20;
mp[12]=23;
mp[-90]=100;
mp[10]=12;
mp[-9]=109;
mp[20]=33;

// Task -3 -> Printing the data

for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<endl;
}

return 0;
} 
