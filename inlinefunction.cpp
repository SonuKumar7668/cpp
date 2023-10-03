#include<iostream>
using namespace std;
inline int product(int a,int b)
{
    return a*b;
}
int main()
{
    int a=4;
    int b=6;
    cout<<product(a,b);
    return 0;
}