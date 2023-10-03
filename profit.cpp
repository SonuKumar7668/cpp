#include<iostream>
using namespace std;
int main()
{
    int c,s;
    cout<<"inter cost price \n";
    cin>>c;
    cout<<"inter selling price \n";
    cin>>s;
    if(c<=s)
    {
        cout<<"profit is "<<s-c;
    }
    else
    {
        cout<<"loss is "<<c-s;
    }
    return 0;
}