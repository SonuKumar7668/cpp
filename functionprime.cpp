#include<iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    int n;
    int a=2;
    for(;a<i;a++){
        for(n=2;n<a;n++){
            if(a%n==0){
                break;
            }
        }
        if(a==n){
            cout<<a<<endl;
        }
    }
    return 0;
}