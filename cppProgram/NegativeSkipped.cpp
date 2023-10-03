#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"inter a number "<<endl;
    cin>>a;
    if (a<0)
    {
        cout<<"its negative and skipped";
    }
    else if (a>0)
    {
        cout<<"its a positive number";
    }
    else
    {
        cout<<"it has no charge";
    }
    return 0;
}
