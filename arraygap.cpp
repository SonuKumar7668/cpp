#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=4;
    arr[1]=3;
    arr[2]=2;
    arr[4]=7;
    for(int i=0;i<5;i++){
        cout<<arr[i];
        cout<<endl;
    }
    arr[3]=10;
    cout<<arr[3];
    return 0;
}