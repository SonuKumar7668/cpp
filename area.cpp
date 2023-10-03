#include<iostream>
using namespace std;
int area(int a)
{
    int x=a*a;
    return x;
}
int main()
{
    int a;
    cout<<"inter the side of square";
    cin>>a;
    cout<<"area of square is -  "<<area(a);
    return 0;

}