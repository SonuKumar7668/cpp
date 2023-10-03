#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int j=1;

    for(i=1;i<=n;i++){
        j*=i;
    }
    cout<<j;
    return 0;
}