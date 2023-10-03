#include<iostream>
using namespace std;
int product(int a,int b)
{
    static int c=0;   
    c=c+1;
    return a*b+c;
}
int main()
{
    int a=3;
    int b=4;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
    cout<<product(a,b)<<endl;
}