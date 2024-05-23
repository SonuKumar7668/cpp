#include<iostream>
using namespace std;
int main(){
    int n,a,t;
    a=0;
    cin>>n;
    while(n>10){
        t=n%10;
        a=(a*10)+t;
        n=n/10;
    }
    a=(a*10)+n;
    cout<<a;
    return 0;
}