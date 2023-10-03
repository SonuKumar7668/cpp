#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int num =0;
    int o=n;
    while(n>0){
        int l=n%10;
        num= num+ (l*l*l);
        n = n/10;         
    }
    if(num==o){
        cout<<"its an armstrong number \n";
    }
    else{
        cout<<"its not an armstrong number \n";
    }
    cout<<num;
    return 0;
}