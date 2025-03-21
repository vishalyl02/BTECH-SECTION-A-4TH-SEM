#include<iostream>
#include<map>
using namespace std;

int main()
{
// Task -1 ->Create a ordered map of key as integer and value as integer
map<int,int>mp;

// Task -2 -> Hard coded data
mp[1]=19;
mp[6]=15;
mp[0]=2;
mp[10]=-19;
mp[-19]=21;
mp[-3]=-21;


// Task-3 -> Printing the data

for(auto p:mp)
{
    cout<<p.first<<" "<<p.second<<endl;
}

return 0;

}

