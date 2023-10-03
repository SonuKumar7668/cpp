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
    
    cout<<m.car;

}