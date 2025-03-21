#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v1(5);
    for(int i=0;i<5;i++)
    {
        cin>>v1[i];
    }
    
    bool flag=false;
    for(int i=0;i<4;i++)
    {
        if(v1[i]>v1[i+1])
        {       swap(v1[i],v1[i+1]);
        flag=true;
         break;
    }
    }
    
    for(int i=0;i<4;i++)
    {
        if(v1[i]>v1[i+1])
        {       cout<<"No";
        return 0;
    }
    }
    if(flag==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
return 0;
}