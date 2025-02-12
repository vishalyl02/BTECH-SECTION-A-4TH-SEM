#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v1(4);
    for(int i=0;i<4;i++)
    {
        cin>>v1[i];
    }
    sort(v1.begin(),v1.end());
    
    if(v1[0]==v1[1] && v1[1]==v1[2] && v1[2]!=v1[3])
        cout<<"Yes"<<endl;
    else if(v1[1]==v1[2] && v1[2]==v1[3] && v1[1]!=v1[0])
        cout<<"Yes"<<endl;
    else if(v1[0]==v1[1] && v1[1]!=v1[2] && v1[2]==v1[3])
        cout<<"Yes"<<endl;
    else
         cout<<"No"<<endl;
    return 0;
    
}