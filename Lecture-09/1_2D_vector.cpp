#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Task -1 -> Declare a 2d vector of rows= 3, cols=4
    vector<vector<int>>v1(3,vector<int>(4,5));
    // Task-2 -> Print the 2D vector
    v1[0][0]=1, v1[0][1]=2 , v1[0][2]=3,v1[0][3]=4;
    
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[0].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    // Task-3  -> Assigning the element value of r=2, col=3, val=-9
    v1[1][2]=-9;
cout<<endl;
    cout<<"Updated 2D vector Print"<<endl;
    cout<<endl;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v1[0].size();j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

//Task -4 -> Printing the 2D matrix in reverse order

cout<<endl;
    cout<<"Updated 2D vector Print in reverse order"<<endl;
    cout<<endl;
for(int i=0;i<v1.size();i++)
{
    for(int j=v1[0].size()-1;j>=0;j--)
    {
        cout<<v1[i][j]<<" ";
    }
    cout<<endl;
}
