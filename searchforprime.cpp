#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a=2;
    int i;
    cout<<"1\n";

    for(;a<n;a++){
        for(i=2;i<a;i++){
            if(a%i==0){
                break;
            }
        }
        if(i==a){
            cout<<a<<endl;
        }
       
    }
    return 0;
}