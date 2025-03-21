#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Task -1 -> Declare an empty string
    string str="";
    // Task -2 -> Take an user input for this string
    cin>>str;
    // Task -3 -> Print the string
     cout<<str<<endl;
    // Task -4 -> Print the length of the string
    cout<<str.length()<<endl;
    
// Task -5 -> To find the length of string without using length()
int i=0,count=0;
// char *str;
while(str[i]!='\0')
{
count++;
i++;
}
cout<<"String length -> "<<count<<endl;
    return 0;
}