#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"inter the value\n";
    cin>>a;
    if (a%2==0)
    {
        if (a%3==0)
        {
            cout<<"its the right value";
        }
        else
        {
            cout<<"its not divisible by 3";
        }
    }
    else
    {
        cout<<"its not even";
    }
    return 0;
}
