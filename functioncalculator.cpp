#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int ans=a+b;
    return ans;
}
int sub(int a,int b)
{
    int ans=a-b;
    return ans;
}
int multiply(int a,int b)
{
    int ans=a*b;
    return ans;
}
int divide(int a,int b)
{
    int ans=a/b;
    return ans;
}
int main()
{
    int a,b;
    cout<<"inter the first integer - ";
    cin>>a;
    cout<<"inter the second integer - ";
    cin>>b;
    int n;
    cout<<"inter the icon you want to do - ";
    cin>>n;
    switch(n){
        case 1:
        cout<<a<<" "<<"+ "<<b<<" = "<<sum(a,b);
        break;
        case 2:
        cout<<a<<" "<<" - "<<b<<" = "<<sub(a,b);
        break;
        case 3:
        cout<<a<<" "<<" * "<<b<<" = "<<multiply(a,b);
        break;
        case 4:
        cout<<a<<" "<<" / "<<b<<" = "<<divide(a,b);
        break;
        default:
        cout<<" answer does not match the option ";
    }
    return 0;
}