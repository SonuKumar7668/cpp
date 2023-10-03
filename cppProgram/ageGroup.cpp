#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"inter age \n";
    cin>>age;
    if (age < 12)
    {
        cout<<"child";
    }
    else if ((age >=12) &&(age<18))
    {
        cout<<"teenager";
    }
    else if (age>=18)
    {
        cout<<"adult";
    }
    return 0;
}
