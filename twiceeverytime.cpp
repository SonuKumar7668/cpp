// this program will double the velue till the given times.

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"inter the number of time you want to double the output\n";
    cin>>n;
    int sum =1;
    for(int i=1;i<=n;i++){
        sum*=2;
        cout<<i<<" "<<sum<<endl;
    }
    return 0;
}