#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>n;
    }
    int ans = 0;
    for(int i = 0;i<n;i++){
        ans = 0;
        for(int j = i;j<n;j++){
            ans += arr[j];
            cout<<arr[j]<<endl;
        }
    }
    return 0;
}