#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int n;
cin>>n;
vector<int>v1(n);
for(int i=0;i<n;i++)
{
cin>>v1[i];
}
int target;
cin>>target;



    sort(v1.begin(),v1.end());


    bool val=binary_search(v1.begin(),v1.end(),target);
    cout<<val<<endl;
    // auto it=lower_bound(v1.begin(),v1.end(),target);
    // int pos=it-v1.begin();
    // if(pos==v1.size())
    // cout<<"Element not Found"<<endl;
    // else
    // cout<<pos<<" "<<v1[pos]<<endl;
    // return 0;
}