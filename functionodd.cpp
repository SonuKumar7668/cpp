#include<iostream>
using namespace std;
bool odd(int num)
{
    if(num%2==0){
        return false;
    }
    else{
        return true;
    }
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int n=a;n<=b;n++){
        if(odd(n)){
            cout<<n<<" ";
        }
    }
    return 0;
}