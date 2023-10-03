#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int odd,even;
    odd=0;
    even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"odd numbers = "<<odd<<endl;
    cout<<"even numbers = "<<even<<endl;
    return 0;

}