#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"inter a number\n";
    cin>>n;
    cout<<"___________\n";
    while(n<10)
    {
        n++;
        if(n==4)continue;
        cout<<n<<endl;
    }
    return 0;
}
