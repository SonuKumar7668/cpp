#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1;
    for(int i=n;i>=1;i--){
        a=a*i;
    }
    cout<<a;
    return 0;
}