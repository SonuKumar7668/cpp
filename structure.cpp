#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salery;
} ep;
int main()
{
    struct employee sonu;
    ep wintr;
    wintr.eId = 7;
    sonu.eId = 5;
    sonu.favchar = 'v';
    sonu.salery = 50000;

    cout<<" eId = "<<sonu.eId<<endl;
    cout<<"favchar = "<<sonu.favchar<<endl;
    cout<<"salery = "<<sonu.salery<<endl;
    cout<<" wintr eId = "<<wintr.eId<<endl;
    return 0;
}