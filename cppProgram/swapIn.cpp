#include<iostream>
using namespace std;
int main()
{
    int a= 5 , b = 6 ,c;
    cout<<"the first number before:-"<<a<<endl;
    cout<<"the second number before:-"<<b<<endl;
    c=b;
    b=a;
    a=c;
    cout<<"now first number is:-"<< a <<endl;
    cout<<"now second number is:-"<< b <<endl;
    return 0;
}
