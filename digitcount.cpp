#include<iostream>
using namespace std;
int main(){
    int n,c;
    c=0;
    cin>>n;
    while(n>10){
        n=n/10;
        c++;
    }
    c=c+1;
    cout<<c;
    return 0;
}