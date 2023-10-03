#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is maximum number\n";
        }
    }
    else {
        if(b>c){
            cout<<b<<" is maximum number\n";
        }
        else{
            cout<<c<<" is maximum number\n";
        }
    }
    return 0;
}