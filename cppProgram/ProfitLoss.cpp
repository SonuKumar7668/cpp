#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"inter cost price\n";
    cin>>cp;
    cout<<"inter selling price\n";
    cin>>sp;
    if (cp>sp)
    {
        cout<<"loss = "<<cp-sp;
    }
    else
    {
        cout<<"profit = "<<sp-cp;
    }
    return 0;
}
