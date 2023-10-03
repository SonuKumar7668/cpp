#include<iostream>
using namespace std;
int main ()
{
    int l,b;
    cout<<"length = ";
    cin>>l;
    cout<<"breath = ";
    cin>>b;
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=l;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}