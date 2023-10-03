#include<iostream>
using namespace std;
int main()
{
    int marks[4]={3,4,5,6};
    for(int i=0;i<4;i++){
        cout<<marks[i]<<endl;

    }
    int* p= marks;
    cout<<"the value of p = "<<*p<<endl;
    cout<<"the value of p+1 = "<<*(p+1)<<endl;
    cout<<"the value of p+2 = "<<*(p+2)<<endl;
    cout<<"the value of p+3 = "<<*(p+3)<<endl;
    return 0;
}