#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{

    // Task -1 -> To declare a pair with key and value -> 5,-9
    pair<int,int>p={5,-9};

    // Task -2-> Print the pair data
    cout<<"First pair data "<<p.first<<" "<<p.second<<endl;

    // Task-3 -> To declare a pair
    pair<int,int>p2;

    // Task -4 -> To take the user input

    cin>>p2.first>>p2.second;
    
    // Task -5 ->Print the data on screen

    cout<<"Second Pair data "<<p2.first<<" "<<p2.second<<endl;

// Task -6 -> Print the smallest value of both pairs

     int mn=min(p.first,p2.first);

     cout<<"Min element is : "<<mn<<endl;

     // Task -7 -> Print the greatest value of both pairs

     int mx=max(p.second,p2.second);

     cout<<"Max Element is"<<mx<<endl;

return 0;

}