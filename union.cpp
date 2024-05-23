#include<iostream>
using namespace std;

union money 
{
    int rice;
    char car;
    float pound;
};
int main()
{
    union money m;
    m.car = 'c';
    cin>>m.rice;
    cout<<m.rice<<endl;
    cout<<m.car;
    return 0;
}