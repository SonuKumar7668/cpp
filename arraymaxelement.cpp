#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,6,8,18,9};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}