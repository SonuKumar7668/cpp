#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int a=1;a<=n;a++){
        if(a%2==0){
            continue;
        }
        cout<<a<<endl;
    }
    return 0;

}