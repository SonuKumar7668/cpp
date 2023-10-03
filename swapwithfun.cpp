#include<iostream>
using namespace std;
int sum(int &a,int &b)
{
    int c=a+b;
    return c;
}
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapref(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=5;
    int b=6;
    cout<<sum(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    swapref(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}