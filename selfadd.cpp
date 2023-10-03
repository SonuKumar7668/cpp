#include<iostream>
using namespace std;
int main ()
{
    int n,f,s,t;
    cout<<"inter a three digit number\n";
    cin>>n;
    f=n/100;
    n=n%100;
    s=n/10;
    t=n%10;
    cout<<"sum of these three numbers are"<<f+s+t;
    return 0;
}