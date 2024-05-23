#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"inter velue of first angle  -";
    cin>>a;
    cout<<"inter velue of second angle -";
    cin>>b;
    c=180-(a+b);
    if(c<0)
    {
        cout<<"wrong angle";
    }
    else{
        cout<<"third angle is - "<<c;
    }
    return 0;
}