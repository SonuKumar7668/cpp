#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"inter first integer :-";
    cin>>a;
    cout<<"inter second integer :-";
    cin>>b;
    cout<<"print\n 1 for addition\n 2 for subtraction \n 3 for multiplication\n 4 for devision\n 5 for modulus\n";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
        break;
    case 5:
        cout<<a%b;
        break;
    default:
        cout<<"not available";
    }
    return 0;
}                                                                                            