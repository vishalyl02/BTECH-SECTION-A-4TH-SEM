#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Binary search function
int binary_srch(vector<int>v2,int tgt)
{
    int n=v2.size();
    int start=0,pos=-1,end=n-1;

while(start<=end)
{
   // int mid=(start+end)/2; // finding the middle of vector
   int mid=start+(end-start)/2; 
   // Case 1: 
    if(v2[mid]==tgt)
    {
        pos=mid;
        break;
    }
    // Case 2:
    if(v2[mid]>tgt)
    {
        end=mid-1;
    }
    // Case 3:
    if(v2[mid]<tgt)
    {
        start=mid+1;
    }
}
return pos;
}



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
sort(v1.begin(),v1.end());
int target;
cin>>target;
int pos=binary_srch(v1,target);

if(pos==-1)
cout<<"Element not found"<<endl;
else
cout<<"Element found at index "<<pos<<endl;
return 0;
}