#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"inter marks of the student\n";
    cin>>a;
    if ((a<=100)&&(a>90))
    {
        cout<<"grade is A+";
    }
    else if ((a<=90)&&(a>80))
    {
        cout<<"grade is A";
    }
    else if ((a<=80)&&(a>70))
    {
        cout<<"grade is B+";
    }
    else if ((a<=70)&&(a>60))
    {
        cout<<"grade is B";
    }
    else if ((a<=60)&&(a>50))
    {
        cout<<"grade is C";
    }
    else if ((a<=50)&&(a>40))
    {
        cout<<"grade is D";
    }
    else if ((a<=40)&&(a>30))
    {
        cout<<"grade is E";
    }
    else if ((a<=30)&&(a>0))
    {
        cout<<"grade is F";
    }
    else
    {
        cout<<"recheck your marks";
    }
    return 0;
}
