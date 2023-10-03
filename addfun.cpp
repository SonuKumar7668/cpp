#include<iostream>
using namespace std;
int add(int x,int y,int z)
{
    int sum=x+y+z;
    return sum;
}
int add(int x,int y)
{
    int sum=x-y;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,c)<<endl;
    return 0;
}