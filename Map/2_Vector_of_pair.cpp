#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main()
{

    // Task-1 -> Declaring a vector of pairs of size 6
    vector<pair<int,int>>p(6);


    // Task-2 -> Taking user input for each pair key value data
    for(int i=0;i<p.size();i++)
    {
        cin>>p[i].first>>p[i].second;
    }

// Task -3 -> Printing the Pairs data
for(int i=0;i<p.size();i++)
{
    cout<<"Pairs data of "<<i+1<<" is :"<<p[i].first<<" "<<p[i].second<<endl;
}


return 0;

}