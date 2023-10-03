#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"inter two numbers\n";
    cin>>n>>m;

    if(m>n){
        cout<<m<<" is maximum number\n";
        cout<<n<<" is minimum number\n";
    }
    else{
        cout<<n<<" is maximum number\n ";
        cout<<m<<" is minimum number\n ";
    }
    return 0;
}