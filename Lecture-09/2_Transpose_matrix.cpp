#include<iostream>
#include<vector>
using namespace std;

int main()
{
// Task -1 -> Declare a 2D matrix of rows=4, columns=4
vector<vector<int>>v1(4,vector<int>(4));

// Task -2 -> Taking user Input

for(int i=0;i<v1.size();i++)
{
    for(int j=0;j<v1[i].size();j++)
    {
        cin>>v1[i][j];
    }
}
// Task -3 -> Print the 2D matrix
for(int i=0;i<v1.size();i++)
{
for(int j=0;j<v1[i].size();j++)
{
    cout<<v1[i][j]<<" ";
}
cout<<endl;
}

// Task -4 -> Transpose of Matrix
vector<vector<int>>v2(4,vector<int>(4));
for(int i=0;i<v1.size();i++)
{
    for(int j=0;j<v1[i].size();j++)
    {
        v2[i][j]=v1[j][i];  // Logic to Transpose the Matrix
    }
}

// Task -5 -> Print the Transpose Matrix

cout<<endl;
cout<<"Printing Transpose Matrix"<<endl;
cout<<endl;

for(int i=0;i<v2.size();i++)
{
    for(int j=0;j<v2[i].size();j++)
    {
        cout<<v2[i][j]<<" ";
    }
    cout<<endl;
}


return 0;


}