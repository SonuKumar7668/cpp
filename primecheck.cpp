#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"inter a number";
    cin>>n;
    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number";
            break;
        }
    }
    if(i==n){
        cout<<"its a prime number";
    }
    return 0;

}