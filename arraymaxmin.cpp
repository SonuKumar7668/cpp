#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,7,8,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<max+min<<endl;
    return 0;
}