#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,6,4,2,3,5,0,1};
    int n=8;
    int sum=0;
    int arrsum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    arrsum=n*(n+1)/2;
    int missing=arrsum-sum;
    cout<<missing;
    return 0;
}