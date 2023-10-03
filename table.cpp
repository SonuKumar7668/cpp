#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"inter the number :-  ";
    cin>>n;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    for(int i=1;i<=10;i++){
        cout<<i <<". "<<n*i;
        cout<<endl;
    }
    return 0;
}