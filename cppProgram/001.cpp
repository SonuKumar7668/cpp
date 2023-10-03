#include<iostream>
using namespace std;
int main()
{
    int cost,sell;
    cout<<"inter cost price\n";
    cin>>cost;
    cout<<"inter selling price\n";
    cin>>sell;
    if(cost<=sell)
    {
        cout<<"profit is "<<sell-cost <<" rupee\n";
    }
    else
    {
        cout<<"loss is "<<cost-sell;
    }
    return 0;
}
