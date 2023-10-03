#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"inter the value\n";
    cin>>a;
    if((a%3==0)&&(a%5==0))
    {
        cout<<"FizzBuzz";
    }
    else if(a%3==0)
    {
        cout<<"Fizz";
    }
    else if(a%5==0)
    {
        cout<<"Buzz";
    }
    else
    {
        cout<<a;
    }
    return 0;
}
