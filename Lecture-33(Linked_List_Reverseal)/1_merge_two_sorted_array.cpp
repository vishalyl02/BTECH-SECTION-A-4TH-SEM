#include<iostream>
#include<vector>
using namespace std;

int main()
{

    int n1,n2;
    cin>>n1>>n2;

    vector<int>v1,v2,ans;
    int x;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int j=0;j<n2;j++)
    {
        cin>>x;
        v2.push_back(x);
    }
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(v1[i]<v2[j])
        {
            ans.push_back(v1[i]);
            i++;
        }
        else if(v2[j]<v1[i])
        {
            ans.push_back(v2[j]);
            j++;
        }
        else{
            ans.push_back(v1[i]);
            ans.push_back(v2[j]);
            i++,j++;
        }
    }
    if(i==n1 && j<n2)
    {
        while(j<n2)
        {
            ans.push_back(v2[j]);
            j++;
        }
    }
    else if(j==n2 && i<n1)
    {
        while(i<n1)
        {
            ans.push_back(v1[i]);
            i++;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}